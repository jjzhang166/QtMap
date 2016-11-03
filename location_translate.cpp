#include "location_translate.h"
#include "math.h"

LocationTranslate::LocationTranslate(QObject *parent) : QObject(parent)
{

}

std::array<double,2> LocationTranslate::lonLat2Mercator(double lon, double lat)
{
    std::array<double,2> xy;

    double x = lon * 20037508.342789 / 180;
    double y = log(tan((90 + lat) * M_PI / 360)) / (M_PI / 180);
    y = y * 20037508.34789 / 180;

    xy[0] = x;
    xy[1] = y;

    return xy;
}

std::array<double,2> LocationTranslate::Mercator2lonLat(double mercatorX, double mercatorY)
{
    std::array<double,2> xy;

    double x = mercatorX / 20037508.34 * 180;

    double y = mercatorY / 20037508.34 * 180;

    y = 180 / M_PI * (2 * atan(exp(y * M_PI / 180)) - M_PI / 2);

    xy[0] = x;
    xy[1] = y;

    return xy;
}
