/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *com_port_list;
    QPushButton *selected_port;
    QPushButton *refrash;
    QSplitter *splitter;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *blank;
    QLabel *zond;
    QLabel *zond_fcb;
    QLabel *zond_um300;
    QLabel *stat_fcb2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        com_port_list = new QComboBox(centralwidget);
        com_port_list->setObjectName("com_port_list");
        com_port_list->setGeometry(QRect(21, 400, 111, 24));
        selected_port = new QPushButton(centralwidget);
        selected_port->setObjectName("selected_port");
        selected_port->setGeometry(QRect(140, 400, 90, 24));
        refrash = new QPushButton(centralwidget);
        refrash->setObjectName("refrash");
        refrash->setGeometry(QRect(139, 430, 91, 24));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(40, 530, 701, 24));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        pushButton_5 = new QPushButton(splitter);
        pushButton_5->setObjectName("pushButton_5");
        splitter->addWidget(pushButton_5);
        pushButton_4 = new QPushButton(splitter);
        pushButton_4->setObjectName("pushButton_4");
        splitter->addWidget(pushButton_4);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName("pushButton_3");
        splitter->addWidget(pushButton_3);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName("pushButton_2");
        splitter->addWidget(pushButton_2);
        pushButton = new QPushButton(splitter);
        pushButton->setObjectName("pushButton");
        splitter->addWidget(pushButton);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 500, 701, 34));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        blank = new QLabel(widget);
        blank->setObjectName("blank");
        blank->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        blank->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(blank, 0, 0, 1, 1);

        zond = new QLabel(widget);
        zond->setObjectName("zond");
        zond->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(zond, 0, 1, 1, 1);

        zond_fcb = new QLabel(widget);
        zond_fcb->setObjectName("zond_fcb");
        zond_fcb->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(zond_fcb, 0, 2, 1, 1);

        zond_um300 = new QLabel(widget);
        zond_um300->setObjectName("zond_um300");
        zond_um300->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(zond_um300, 0, 3, 1, 1);

        stat_fcb2 = new QLabel(widget);
        stat_fcb2->setObjectName("stat_fcb2");
        stat_fcb2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(stat_fcb2, 0, 4, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        selected_port->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\277\320\276\321\200\321\202", nullptr));
        refrash->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        blank->setText(QCoreApplication::translate("MainWindow", "\320\221\320\273\320\260\320\275\320\272\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        zond->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\275\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\276\320\261\321\211", nullptr));
        zond_fcb->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\275\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\244\320\241\320\222-\320\2222", nullptr));
        zond_um300->setText(QCoreApplication::translate("MainWindow", "\320\227\320\276\320\275\320\264\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\243\320\234300", nullptr));
        stat_fcb2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\241\320\222-\320\2222 \321\201\321\202\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
