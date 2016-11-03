#ifndef MAPWIDGET_H
#define MAPWIDGET_H
#include <QOpenGLWidget>

class MapWidget:public QOpenGLWidget
{
    Q_OBJECT

public:
    MapWidget();

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
};

#endif // MAPWIDGET_H
