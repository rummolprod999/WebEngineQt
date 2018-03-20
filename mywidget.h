#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QObject>
#include <QWidget>
#include <QApplication>
#include <QWebEngineView>
#include <QtWidgets>
class mywidget : public QWidget
{
    Q_OBJECT
public:
    QPushButton *enter;
    QLineEdit *u_edit;
    QVBoxLayout *vbox;
    QHBoxLayout *hbox;
    QWebEngineView view;
    mywidget();
    QUrl commandLineUrlArgument(QString);
private slots:
    void on_pushButton_clicked();
    void on_text_changed();
};

#endif // MYWIDGET_H
