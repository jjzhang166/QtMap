#ifndef LOCATIONTRANSLATE_H
#define LOCATIONTRANSLATE_H

#include <QObject>
#include <array>

class LocationTranslate : public QObject
{
    Q_OBJECT
public:
    explicit LocationTranslate(QObject *parent = 0);
    //经纬度转墨卡托
    static std::array<double,2> lonLat2Mercator(double lon, double lat);
    //墨卡托转经纬度
    static std::array<double,2> Mercator2lonLat(double mercatorX, double mercatorY);
signals:

public slots:
};

#endif // LOCATIONTRANSLATE_H
