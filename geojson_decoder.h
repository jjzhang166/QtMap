#ifndef GEOJSONDECODER_H
#define GEOJSONDECODER_H

#include <QObject>
#include <string.h>
#include <list>
#include <geometry.h>
#include <QJsonObject>

using namespace std;
class GeoJsonDecoder : public QObject
{
    Q_OBJECT

public:
    explicit GeoJsonDecoder(QObject *parent = 0);

    QString Point="Point";
    QString Linestring="Linestring";
    QString Polygon="Polygon";
    QString MultiPoint="MultiPoint";
    QString MultiLinestring="MultiLinestring";
    QString MultiPolygon="MultiPolygon";
    QString GeometryCollection="GeometryCollection";

    list<Geometry>* decode(QString json);
signals:

public slots:


private:
    void decodePolygon(QJsonObject* geometry,list<Geometry>* geometryList);

    void mathMaxMin(double lat,double lon);
};

#endif // GEOJSONDECODER_H
