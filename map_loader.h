#ifndef MAPLOADER_H
#define MAPLOADER_H


#include <QObject>
#include <QFile>
#include <QFileInfo>
#include <stdio.h>
#include <QPainterPath>
#include <QPointF>
#include <list>
#include "ogr_feature.h"
#include "ogr_api.h"
#include "ogrsf_frmts.h"
#include "gdal_priv.h"
#include "map_widget.h"

class MapLoader : public QObject
{
    Q_OBJECT
public:
    explicit MapLoader(QObject *parent = 0);
    //通过uri加载地图数据
    void loadDataForFile(QFileInfo fileInfo);
    //通过http加载地图数据
    void loadDataForNet(QUrl url);
signals:

public slots:

private:
    //计算多边形
    void matchPolygon(OGRPolygon* polygon);


};

#endif // MAPLOADER_H
