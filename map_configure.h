#ifndef MAPCONFIGURE_H
#define MAPCONFIGURE_H

#include <QObject>

class MapConfigure : public QObject
{
    Q_OBJECT
public:
    explicit MapConfigure(QObject *parent = 0);
    /**
         * 缩放比例
         */
    double scala=100;
        //最大经度
    double maxLon=0;
        //最小经度
    double minLon=1000000000;
        //最大维度
    double maxLat=0;
        //最小维度
    double minLat=1000000000;

    long width;

    long height;
signals:

public slots:
};

#endif // MAPCONFIGURE_H
