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
    void on_comboBox_activated(int index);

   void on_refrash_clicked();

    void on_selected_port_clicked();

   //void read_data();
  //  void set_setting_port();

   void on_vkl_clicked();
   // void serial_data();

   void on_close_port_clicked();

   private:
    Ui::MainWindow *ui;
    QSerialPort *com_port;
    QComboBox com_port_list;
    QString selected_port;
};
#endif // MAINWINDOW_H
