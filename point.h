#ifndef POINT_H
#define POINT_H
#include "geometry.h"

class Point : public Geometry
{
public:
    Point();

    Point(double x,double y);

    Point(double x,double y,double z);

    double x;
    double y;
    double z;
};

#endif // POINT_H
