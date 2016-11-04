#ifndef MAPCONFIGURE_H
#define MAPCONFIGURE_H
#include <QObject>

class MapConfigure : public QObject
{
    Q_OBJECT
public:
    explicit MapConfigure(QObject *parent = 0);

    int width=0;
    int height=0;
signals:

public slots:
};

#endif // MAPCONFIGURE_H
