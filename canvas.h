#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QPainterPath>

class Canvas : public QWidget
{
    Q_OBJECT

public:
    Canvas(QWidget* parent = nullptr);

protected:

private:
    QPainterPath currentPath;
    QList<QPainterPath> paths;
};

#endif // CANVAS_H
