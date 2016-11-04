#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QOpenGLWidget>
#include <QPainterPath>
#include "map_configure.h"
#include "map_loader.h"

class MapWidget;

class MapLoader;

class MapCallBack{
public:
    virtual void initSuccess(MapWidget* mapWidget);

    virtual void initError();
};
class MapWidget : public QOpenGLWidget
{
    Q_OBJECT

public:
    MapWidget(QWidget *parent = 0);
    ~MapWidget();

    static MapConfigure* map_configure;

    //得到地图加载器
    MapLoader* GetMapLoader();

    //显示地图
    void show();

    static std::list<QPainterPath>* pathList;

    void setMapCallBack(MapCallBack mapCallBack);
protected:
    void paintEvent(QPaintEvent *e);

    void resizeGL(int w,int h);

    MapCallBack mapCallBack;
private:
};

#endif // WIDGET_H
