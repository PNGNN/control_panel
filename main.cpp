#include "mainwindow.h"

#include <QApplication>
#include<QSerialPort>
#include<QSerialPortInfo>
int main(int argc, char *argv[])
{
    //QApplication app(argc, argv);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    /*QPushButton *button = new QPushButton("Переключатель");
    button->setCheckable(true);

    QObject::connect(button, &QPushButton::toggled, [](bool checked){
        qDebug() << "Кнопка переключена:" << checked;
    });

    button->show();*/
    return a.exec();

}
