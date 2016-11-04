#include "map_loader.h"

void MapLoader::loadDataForFile(QFileInfo fileInfo)
{
    GDALDataset* data_set=(GDALDataset*) GDALOpenEx(
                fileInfo.absoluteFilePath().toLatin1().data(), GDAL_OF_VECTOR, NULL, NULL, NULL );

    if (data_set!=nullptr){
       for(int i=0;i<data_set->GetLayerCount();i++){
           OGRLayer* layer  = data_set->GetLayer(i);

           layer->ResetReading();

           OGRFeature *feature;

           while((feature=layer->GetNextFeature())!=nullptr){
               OGRGeometry *geometry = feature->GetGeometryRef();

               OGRSpatialReference oSRS;
               //设置名称，无意义
               oSRS.SetProjCS( "UTM 17(WGS84) in northern hemisphere." );
               //设置地理坐标系
               oSRS.SetWellKnownGeogCS( "WGS84" );
               oSRS.SetUTM(17,true);



               if (geometry->getGeometryType()==wkbPolygon){
                    OGRPolygon* polygon=(OGRPolygon*)geometry;

                    matchPolygon(polygon);
               }
           }
       }
    }

    delete data_set;
    data_set=nullptr;
}

void MapLoader::matchPolygon(OGRPolygon *polygon)
{
    //闭合多边形
    polygon->closeRings();

    //计算外环
    OGRLinearRing* linearRing=polygon->getExteriorRing();

    QPainterPath path;
    for(int i=0;i<linearRing->getNumPoints();i++){
        double x=linearRing->getX(i);
        double y=linearRing->getY(i);

        if (i==0){
            path.moveTo(QPointF(x,y));
        }else{
            path.lineTo(QPointF(x,y));
        }
    }

    MapWidget::pathList->push_back(path);
}
