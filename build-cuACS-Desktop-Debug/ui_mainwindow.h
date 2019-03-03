/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
<<<<<<< HEAD
<<<<<<< HEAD
#include <QtWidgets/QListView>
=======
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_7;
    QStackedWidget *stackedWidget;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QPushButton *pushButton_Client;
    QPushButton *pushButton_Staff;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QWidget *page_9;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
<<<<<<< HEAD
<<<<<<< HEAD
    QListView *listView;
=======
    QListWidget *listWidget;
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
    QListWidget *listWidget;
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QWidget *page_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
<<<<<<< HEAD
<<<<<<< HEAD
    QListView *listView_2;
=======
    QTableView *tableView_2;
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
    QTableView *tableView_2;
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
    QPushButton *pushButton_10;
    QPushButton *pushButton_8;
    QWidget *page_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
<<<<<<< HEAD
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QMenuBar *menuBar;
    QMenu *menucuACS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(316, 606);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_7 = new QVBoxLayout(centralWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        verticalLayout_2 = new QVBoxLayout(page_1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(page_1);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(51, 435));
        label->setMaximumSize(QSize(298, 435));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Mono"));
        font.setPointSize(45);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        pushButton_Client = new QPushButton(page_1);
        pushButton_Client->setObjectName(QStringLiteral("pushButton_Client"));
        pushButton_Client->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(pushButton_Client);

        pushButton_Staff = new QPushButton(page_1);
        pushButton_Staff->setObjectName(QStringLiteral("pushButton_Staff"));

        verticalLayout_2->addWidget(pushButton_Staff);

        stackedWidget->addWidget(page_1);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(page_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_3);

        pushButton_3 = new QPushButton(page_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(30);
        pushButton_3->setFont(font1);

        verticalLayout_3->addWidget(pushButton_3);

        pushButton = new QPushButton(page_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        stackedWidget->addWidget(page_3);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        verticalLayout_4 = new QVBoxLayout(page_8);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(page_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        pushButton_5 = new QPushButton(page_8);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setFont(font1);

        verticalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(page_8);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setFont(font1);

        verticalLayout_4->addWidget(pushButton_6);

        pushButton_2 = new QPushButton(page_8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        stackedWidget->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        verticalLayout = new QVBoxLayout(page_9);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(page_9);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Liberation Mono"));
        font2.setPointSize(20);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

<<<<<<< HEAD
<<<<<<< HEAD
        listView = new QListView(page_9);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);
=======
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
        listWidget = new QListWidget(page_9);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);
<<<<<<< HEAD
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa

        pushButton_9 = new QPushButton(page_9);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(page_9);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        stackedWidget->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        verticalLayout_5 = new QVBoxLayout(page_10);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(page_10);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

<<<<<<< HEAD
<<<<<<< HEAD
        listView_2 = new QListView(page_10);
        listView_2->setObjectName(QStringLiteral("listView_2"));

        verticalLayout_5->addWidget(listView_2);
=======
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
        tableView_2 = new QTableView(page_10);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_5->addWidget(tableView_2);
<<<<<<< HEAD
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa

        pushButton_10 = new QPushButton(page_10);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_5->addWidget(pushButton_10);

        pushButton_8 = new QPushButton(page_10);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_5->addWidget(pushButton_8);

        stackedWidget->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        verticalLayout_6 = new QVBoxLayout(page_11);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(page_11);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
        lineEdit = new QLineEdit(page_11);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_6->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(page_11);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        verticalLayout_6->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(page_11);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        verticalLayout_6->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(page_11);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        verticalLayout_6->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(page_11);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        verticalLayout_6->addWidget(lineEdit_5);

        lineEdit_6 = new QLineEdit(page_11);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        verticalLayout_6->addWidget(lineEdit_6);

        lineEdit_7 = new QLineEdit(page_11);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        verticalLayout_6->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(page_11);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        verticalLayout_6->addWidget(lineEdit_8);

<<<<<<< HEAD
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
        pushButton_11 = new QPushButton(page_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_6->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(page_11);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout_6->addWidget(pushButton_12);

        stackedWidget->addWidget(page_11);

        verticalLayout_7->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 316, 22));
        menucuACS = new QMenu(menuBar);
        menucuACS->setObjectName(QStringLiteral("menucuACS"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menucuACS->menuAction());

        retranslateUi(MainWindow);

<<<<<<< HEAD
<<<<<<< HEAD
        stackedWidget->setCurrentIndex(0);
=======
        stackedWidget->setCurrentIndex(5);
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
        stackedWidget->setCurrentIndex(0);
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Welcome \n"
"to \n"
" cuACS ", Q_NULLPTR));
        pushButton_Client->setText(QApplication::translate("MainWindow", "Client", Q_NULLPTR));
        pushButton_Staff->setText(QApplication::translate("MainWindow", "Staff", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Hello\n"
"Client", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "View Animal", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Hello\n"
"Staff", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "View Animal", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Animal List", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Animal Profile", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MainWindow", "Edit Profile", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
        lineEdit->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("MainWindow", "Gender", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("MainWindow", "Species", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("MainWindow", "Breed", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("MainWindow", "Weight", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("MainWindow", "Height", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
<<<<<<< HEAD
>>>>>>> b348d456ac3be69c3775c03836bbc01f7766812e
=======
>>>>>>> ca38f583b8a57816c80298cadfecfda00eb74cfa
        pushButton_11->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        menucuACS->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
