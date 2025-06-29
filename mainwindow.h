#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QString>
#include <QMainWindow>
#include<QSerialPort>
#include<QSerialPortInfo>
#include<QComboBox>
#include <QPushButton>
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

   void on_vkl_toggled(bool checked);


   private:
    Ui::MainWindow *ui;
    QSerialPort *com_port;
    QComboBox com_port_list;
    QPushButton *toggle_vkl_btn;
};
#endif // MAINWINDOW_H
