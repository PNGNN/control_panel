#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QString>
#include <QMainWindow>
#include<QSerialPort>
#include<QSerialPortInfo>
#include<QComboBox>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

   void load_ports();
   void on_reffrash_clicked(bool checked);

   void on_com_port_list_currentIndexChanged(int index);

   void on_selected_port_clicked();

   private:
    Ui::MainWindow *ui;
    QSerialPort *com_port;
    QComboBox com_port_list;
};
#endif // MAINWINDOW_H
