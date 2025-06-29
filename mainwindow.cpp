#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QSerialPort>
#include<QSerialPortInfo>
#include<QComboBox>
#include<QDebug>
#include<QString>
#include<QMessageBox>
 //auto port_info=QSerialPortInfo::availablePorts();
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{

    com_port->close();
    delete com_port;
     com_port=nullptr;
    delete ui;

}

void MainWindow::on_comboBox_activated(int index)
{


}


void MainWindow::on_refrash_clicked()
{
    ui->com_port_list->clear();

       /* for(const QSerialPortInfo &port:port_info){
          ui->com_port_list->addItem(QString("%1").arg(port.portName())), port.portName();
        };*/
   foreach (const QSerialPortInfo &port_list_info, QSerialPortInfo::availablePorts()) {
        ui->com_port_list->addItem(port_list_info.portName());
    }

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
    com_port=new QSerialPort(this);
    com_port->setPortName("COM6");
    com_port->setBaudRate(QSerialPort::Baud9600);
    com_port->setDataBits(QSerialPort::Data8);
    com_port->setParity(QSerialPort::EvenParity);
    com_port->setStopBits(QSerialPort::TwoStop);
    com_port->setFlowControl(QSerialPort::NoFlowControl);
    com_port->open(QIODevice::ReadWrite);
    com_port->write("Heel");
    connect(com_port, SIGNAL(readyRead()), this, SLOT(read_data()));
    qDebug()<<"Open"<<&com_port_list;

}

void MainWindow::read_data()
{
    if(com_port&& com_port->isOpen()){
        QByteArray data=com_port->readAll();
        qDebug()<<""<<data;
    }
}

void MainWindow::set_setting_port()
{


}


void MainWindow::on_vkl_clicked() //отправить
{
    QByteArray data_three;
    data_three.append(0x03);
    qint32 byte_write_three=com_port->write(data_three);
    qDebug()<<data_three.toHex();
    if(com_port->isOpen())
    {
        if(!byte_write_three)
            qDebug()<<"Error"<<com_port->errorString();
        else

            qDebug()<<data_three;

    }
    else
        qDebug()<<"not open";
}

void MainWindow::serial_data()
{
    QByteArray byte_data;
    byte_data=com_port->readAll();
    ui->label->setText(byte_data.toHex());
}


void MainWindow::on_close_port_clicked()
{
    com_port->close();
    delete com_port;
    com_port=nullptr;
}

