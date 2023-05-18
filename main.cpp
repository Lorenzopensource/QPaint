#include "mainwindow.h"

#include <QApplication>
#include "canvas.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    Canvas canvas;
    canvas.show();

    return app.exec();
}
