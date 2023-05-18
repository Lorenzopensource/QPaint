#include "canvas.h"
#include <QMouseEvent>
#include <QPainter>

Canvas::Canvas(QWidget* parent)
    : QWidget(parent)
{
    setFixedSize(1080,720);
    setMouseTracking(true);
}
