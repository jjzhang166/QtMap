#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <QObject>
#include <QtCore>
class Geometry : public QObject
{
    Q_OBJECT
public:
    explicit Geometry(QObject *parent = 0);
    long id;
    QString tag;
signals:

public slots:
};

#endif // GEOMETRY_H
