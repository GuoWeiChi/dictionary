#include "widget.h"
#include <QApplication>
#include <QPalette>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setAutoFillBackground(true);
    QPalette p = w.palette();
    p.setColor(QPalette::Window,"pink");
    w.setPalette(p);
    w.show();

    return a.exec();
}
