/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QWidget *page_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QWidget *page_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_4;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QTextBrowser *textBrowser;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *page_5;
    QPushButton *pushButton_12;
    QTextBrowser *textBrowser_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(100, 90, 591, 391));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 491, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        pushButton_6 = new QPushButton(page_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(40, 190, 449, 23));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(40, 230, 449, 23));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 110, 301, 31));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(360, 110, 121, 31));
        lineEdit_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 20, 449, 74));
        label_2->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pushButton_8 = new QPushButton(page_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 200, 449, 23));
        pushButton_9 = new QPushButton(page_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 240, 449, 23));
        lineEdit_3 = new QLineEdit(page_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 140, 441, 31));
        lineEdit_3->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 40, 449, 74));
        label_3->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        pushButton_10 = new QPushButton(page_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(50, 300, 449, 23));
        pushButton_11 = new QPushButton(page_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(50, 340, 449, 23));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, -10, 441, 31));
        label_4->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(page_4);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 170, 301, 101));
        listWidget->setAlternatingRowColors(false);
        listWidget_2 = new QListWidget(page_4);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(370, 170, 121, 101));
        listWidget_2->setSelectionMode(QAbstractItemView::MultiSelection);
        textBrowser = new QTextBrowser(page_4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(50, 50, 441, 91));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 140, 301, 31));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(370, 140, 121, 31));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(50, 20, 441, 31));
        label_7->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        pushButton_12 = new QPushButton(page_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(40, 260, 449, 23));
        textBrowser_2 = new QTextBrowser(page_5);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 30, 441, 211));
        stackedWidget->addWidget(page_5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ho\305\237geldiniz", nullptr));
#if QT_CONFIG(statustip)
        pushButton->setStatusTip(QCoreApplication::translate("MainWindow", "Add a new lessons to the courseList", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton->setText(QCoreApplication::translate("MainWindow", "Add a new lessons to the courseList", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(statustip)
        pushButton_2->setStatusTip(QCoreApplication::translate("MainWindow", "Add a new student to the studentList", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add a new student to the studentList", nullptr));
#if QT_CONFIG(statustip)
        pushButton_3->setStatusTip(QCoreApplication::translate("MainWindow", "Add a new lessons for a student", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Add a new lessons for a student", nullptr));
#if QT_CONFIG(statustip)
        pushButton_4->setStatusTip(QCoreApplication::translate("MainWindow", "Print the schedule", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Print the schedule", nullptr));
#if QT_CONFIG(statustip)
        pushButton_5->setStatusTip(QCoreApplication::translate("MainWindow", "Exit the menu", nullptr));
#endif // QT_CONFIG(statustip)
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Exit the menu", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Onayla", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Geri D\303\266n", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter the courseID and hour like 151214002 8 or press Exit", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Onayla", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Geri D\303\266n", nullptr));
        lineEdit_3->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter the studentName like harun or press Exit", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "Onayla", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "Geri D\303\266n", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "First select the student and then select the lessons or press Exit", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Students List", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Lessons List", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Informatian Box about Students", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "Geri D\303\266n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
