#include "map_widget.h"
#include <QPainter>

MapWidget::MapWidget()
{
//    setFixedSize(200, 200);
    setAutoFillBackground(false);
}

void MapWidget::paintEvent(QPaintEvent *event)
{
     QPainter painter(this);


}
