#include "geojson_decoder.h"
#include <QJsonDocument>
#include <QJsonArray>

GeoJsonDecoder::GeoJsonDecoder(QObject *parent) : QObject(parent)
{

}

list<Geometry>* GeoJsonDecoder::decode(QString json)
{
     QJsonParseError error;

     QJsonDocument doc=QJsonDocument::fromJson(json.toUtf8(),&error);

     list<Geometry>* geoList=new list<Geometry>();

     if (error.error == QJsonParseError::NoError) {
         QJsonObject json=doc.object();

         for(QJsonValue feature:json.take("features").toArray()){
             QJsonObject geometry=feature.toObject().take("geometry").toObject();

             if (geometry.take("type").toString()==Polygon){
                decodePolygon(&json,geoList);
             }
         }
     }

     return geoList;
}

void GeoJsonDecoder::decodePolygon(QJsonObject* geometry, list<Geometry>* geometryList)
{

}

void GeoJsonDecoder::mathMaxMin(double lat, double lon)
{

}

