#include "mywidget.h"
#include <QWebEngineView>
#include <QWebEngineSettings>
#include <QtWidgets>
#include <QDebug>
mywidget::mywidget()
{
    enter = new QPushButton("Go");
    u_edit = new QLineEdit;
    vbox = new QVBoxLayout;
    hbox = new QHBoxLayout;
    view.resize(500, 500);
    QWebEngineSettings *defaultSettings = QWebEngineSettings::globalSettings();
    defaultSettings->setAttribute(QWebEngineSettings::PluginsEnabled, true);
    hbox->addWidget(u_edit);
    hbox->addWidget(enter);
    vbox->addLayout(hbox);
    vbox->addWidget(&view);
    this->setLayout(vbox);
    QObject::connect(enter, SIGNAL(clicked(bool)), this, SLOT(on_pushButton_clicked()));

}
QUrl mywidget::commandLineUrlArgument(QString s)
{
    return QUrl(s);
}
void mywidget::on_pushButton_clicked()
{
    qDebug() << u_edit->text();
    qDebug() << "u_edit->text()";
    if(u_edit->text() != ""){
        qDebug() << u_edit->text();
        view.setUrl(commandLineUrlArgument(u_edit->text()));

    }
}

void mywidget::on_text_changed()
{
    qDebug() << u_edit->text();
    qDebug() << "u_edit->text()";
    if(u_edit->text() != ""){
        qDebug() << u_edit->text();
        view.setUrl(commandLineUrlArgument(u_edit->text()));

    }
}
