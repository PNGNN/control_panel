#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSerialPort>
#include<QSerialPortInfo>
#include<QComboBox>
#include<QDebug>
#include<QString>
 const auto port_info=QSerialPortInfo::availablePorts();
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
selected_port=ui->com_port_list->currentData().toString();
    com_port=new QSerialPort(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    com_port->close();
    delete com_port;

}

void MainWindow::on_comboBox_activated(int index)
{


}


void MainWindow::on_refrash_clicked()
{
    ui->com_port_list->clear();

        for(const QSerialPortInfo &port:port_info){
           // ui->com_port_list->addItem(QString("%1").arg(port.portName())), port.portName();
            ui->com_port_list->addItem(port.portName(),port.systemLocation());
        };

        if(ui->com_port_list->count()==0)
        {
            ui->com_port_list->addItem("Нет портов");
            ui->com_port_list->setEnabled(false);
        }
        else{
            ui->com_port_list->setEnabled(true);
        }

}


void MainWindow::on_selected_port_clicked()
{



    /*if(com_port&&com_port->isOpen()){
        com_port->close();
        delete com_port;
    }*/

   /* com_port->setPortName(" 1");
    com_port->setBaudRate(QSerialPort::Baud9600);
    com_port->setDataBits(QSerialPort::Data8);
    com_port->setParity(QSerialPort::EvenParity);
    com_port->setStopBits(QSerialPort::TwoStop);
    com_port->setFlowControl(QSerialPort::NoFlowControl);
     com_port->open(QIODevice::ReadWrite);
*/
    com_port->setPortName(" 1");
    com_port->setBaudRate(QSerialPort::Baud9600);
    com_port->setDataBits(QSerialPort::Data8);
    com_port->setParity(QSerialPort::NoParity);
    com_port->setStopBits(QSerialPort::OneStop);
    com_port->setFlowControl(QSerialPort::NoFlowControl);
    com_port->open(QIODevice::ReadWrite);
    qDebug()<<" set";




}

void MainWindow::read_data()
{
    if(com_port&& com_port->isOpen()){
        QByteArray data=com_port->readAll();
        qDebug()<<""<<data;
    }
}

