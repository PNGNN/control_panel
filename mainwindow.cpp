#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSerialPort>
#include<QSerialPortInfo>
#include<QComboBox>
#include<QDebug>
#include<QString>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent),ui(new Ui::MainWindow), com_port(nullptr)
{
    ui->setupUi(this);
    load_ports();
}
MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::load_ports()
{
    ui->com_port_list->clear();
    foreach(auto &port,QSerialPortInfo::availablePorts() )
        ui->com_port_list->addItem(port.portName());
}
void MainWindow::on_reffrash_clicked(bool checked)
{
    load_ports();
}
void MainWindow::on_com_port_list_currentIndexChanged(int index)
{

}
void MainWindow::on_selected_port_clicked()
{
    if(com_port!=nullptr){
        com_port->close();
        delete com_port;
    }
    com_port=new QSerialPort(this);
    com_port->setPortName(ui->com_port_list->currentText());
    com_port->setBaudRate(QSerialPort::Baud9600);
    com_port->setDataBits(QSerialPort::Data8);
    com_port->setParity(QSerialPort::EvenParity);
    com_port->setStopBits(QSerialPort::TwoStop);
    if(com_port->open(QIODevice::ReadWrite)){
        QMessageBox::information(this, "Информация", "Порт выбран");
    }else {
        QMessageBox::critical(this, "Port error", "NOT open");
    }
}

