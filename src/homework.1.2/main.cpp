#include <QApplication>

#include "mainwindow.hpp"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    cvcourse::mainwindow win;
    win.show();
    return app.exec();
}