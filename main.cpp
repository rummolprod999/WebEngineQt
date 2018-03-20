#include "mainwindow.h"
#include "mywidget.h"
#include <QApplication>
#include <QWebEngineView>
#include <QtWidgets>
QUrl commandLineUrlArgument(QString s)
{
    return QUrl(s);
}

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(argc, argv);
    mywidget wget;

    wget.show();
    //view.show();

    return app.exec();
}
