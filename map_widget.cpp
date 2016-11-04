#include "map_widget.h"
#include "ogr_api.h"


MapWidget::MapWidget(QWidget *parent)
{
    this->map_configure=new MapConfigure;

    pathList=new std::list<QPainterPath>();

    //注册数据解析和转换服务
    OGRRegisterAll();

}

MapWidget::~MapWidget()
{

}

MapLoader *MapWidget::GetMapLoader()
{
    MapLoader* mapLoader=new MapLoader;

    return mapLoader;
}

void MapWidget::setMapCallBack(MapCallBack mapCallBack)
{
    mapCallBack=mapCallBack;
}
void MapWidget::paintEvent(QPaintEvent *e){

}

void MapWidget::resizeGL(int w, int h)
{
    this->map_configure->width=w;
    this->map_configure->height=h;

    mapCallBack.initSuccess();
}
