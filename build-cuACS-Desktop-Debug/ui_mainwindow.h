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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
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
    QWidget *animalList_Client;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QListWidget *listWidget_2;
    QPushButton *pushButton_4;
    QWidget *animalProfile_Client;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QListWidget *listWidget_3;
    QPushButton *pushButton_13;
    QWidget *page_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_2;
    QWidget *animalList_Staff;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QListWidget *ALS_listWidget;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QWidget *animalProfile_Staff;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QListWidget *APS_listWidget;
    QPushButton *APS_EditProfile;
    QPushButton *APS_Back;
    QWidget *page_11;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *page;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QListWidget *listWidget_4;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_10;
    QListWidget *listWidget_5;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QPushButton *pushButton_21;
    QPushButton *pushButton_20;
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
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
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
        animalList_Client = new QWidget();
        animalList_Client->setObjectName(QStringLiteral("animalList_Client"));
        verticalLayout_7 = new QVBoxLayout(animalList_Client);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_7 = new QLabel(animalList_Client);
        label_7->setObjectName(QStringLiteral("label_7"));
        QFont font2;
        font2.setPointSize(20);
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        listWidget_2 = new QListWidget(animalList_Client);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        verticalLayout_7->addWidget(listWidget_2);

        pushButton_4 = new QPushButton(animalList_Client);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_7->addWidget(pushButton_4);

        stackedWidget->addWidget(animalList_Client);
        animalProfile_Client = new QWidget();
        animalProfile_Client->setObjectName(QStringLiteral("animalProfile_Client"));
        verticalLayout_8 = new QVBoxLayout(animalProfile_Client);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(animalProfile_Client);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font2);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_8);

        listWidget_3 = new QListWidget(animalProfile_Client);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));

        verticalLayout_8->addWidget(listWidget_3);

        pushButton_13 = new QPushButton(animalProfile_Client);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        verticalLayout_8->addWidget(pushButton_13);

        stackedWidget->addWidget(animalProfile_Client);
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

        pushButton_14 = new QPushButton(page_8);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        QFont font3;
        font3.setPointSize(30);
        pushButton_14->setFont(font3);

        verticalLayout_4->addWidget(pushButton_14);

        pushButton_15 = new QPushButton(page_8);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setFont(font3);

        verticalLayout_4->addWidget(pushButton_15);

        pushButton_2 = new QPushButton(page_8);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_4->addWidget(pushButton_2);

        stackedWidget->addWidget(page_8);
        animalList_Staff = new QWidget();
        animalList_Staff->setObjectName(QStringLiteral("animalList_Staff"));
        verticalLayout = new QVBoxLayout(animalList_Staff);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(animalList_Staff);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font4;
        font4.setFamily(QStringLiteral("Liberation Mono"));
        font4.setPointSize(20);
        label_4->setFont(font4);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        ALS_listWidget = new QListWidget(animalList_Staff);
        ALS_listWidget->setObjectName(QStringLiteral("ALS_listWidget"));

        verticalLayout->addWidget(ALS_listWidget);

        pushButton_9 = new QPushButton(animalList_Staff);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(animalList_Staff);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        stackedWidget->addWidget(animalList_Staff);
        animalProfile_Staff = new QWidget();
        animalProfile_Staff->setObjectName(QStringLiteral("animalProfile_Staff"));
        verticalLayout_5 = new QVBoxLayout(animalProfile_Staff);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_5 = new QLabel(animalProfile_Staff);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_5);

        APS_listWidget = new QListWidget(animalProfile_Staff);
        APS_listWidget->setObjectName(QStringLiteral("APS_listWidget"));

        verticalLayout_5->addWidget(APS_listWidget);

        APS_EditProfile = new QPushButton(animalProfile_Staff);
        APS_EditProfile->setObjectName(QStringLiteral("APS_EditProfile"));

        verticalLayout_5->addWidget(APS_EditProfile);

        APS_Back = new QPushButton(animalProfile_Staff);
        APS_Back->setObjectName(QStringLiteral("APS_Back"));

        verticalLayout_5->addWidget(APS_Back);

        stackedWidget->addWidget(animalProfile_Staff);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        verticalLayout_6 = new QVBoxLayout(page_11);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_6 = new QLabel(page_11);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font4);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_6);

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

        pushButton_11 = new QPushButton(page_11);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_6->addWidget(pushButton_11);

        pushButton_12 = new QPushButton(page_11);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout_6->addWidget(pushButton_12);

        stackedWidget->addWidget(page_11);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_9 = new QVBoxLayout(page);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_9 = new QLabel(page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_9);

        listWidget_4 = new QListWidget(page);
        listWidget_4->setObjectName(QStringLiteral("listWidget_4"));

        verticalLayout_9->addWidget(listWidget_4);

        pushButton_17 = new QPushButton(page);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        verticalLayout_9->addWidget(pushButton_17);

        pushButton_16 = new QPushButton(page);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        verticalLayout_9->addWidget(pushButton_16);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_10 = new QVBoxLayout(page_2);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_10);

        listWidget_5 = new QListWidget(page_2);
        listWidget_5->setObjectName(QStringLiteral("listWidget_5"));

        verticalLayout_10->addWidget(listWidget_5);

        pushButton_18 = new QPushButton(page_2);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        verticalLayout_10->addWidget(pushButton_18);

        pushButton_19 = new QPushButton(page_2);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        verticalLayout_10->addWidget(pushButton_19);

        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_11 = new QVBoxLayout(page_4);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font2);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_11);

        lineEdit_9 = new QLineEdit(page_4);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        verticalLayout_11->addWidget(lineEdit_9);

        lineEdit_10 = new QLineEdit(page_4);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        verticalLayout_11->addWidget(lineEdit_10);

        lineEdit_11 = new QLineEdit(page_4);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        verticalLayout_11->addWidget(lineEdit_11);

        lineEdit_12 = new QLineEdit(page_4);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        verticalLayout_11->addWidget(lineEdit_12);

        lineEdit_13 = new QLineEdit(page_4);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        verticalLayout_11->addWidget(lineEdit_13);

        pushButton_21 = new QPushButton(page_4);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));

        verticalLayout_11->addWidget(pushButton_21);

        pushButton_20 = new QPushButton(page_4);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));

        verticalLayout_11->addWidget(pushButton_20);

        stackedWidget->addWidget(page_4);

        horizontalLayout_2->addWidget(stackedWidget);

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

        stackedWidget->setCurrentIndex(5);


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
        label_7->setText(QApplication::translate("MainWindow", "Animal List", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Animal Profile", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Hello\n"
"Staff", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "View Animal", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "View Client", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "Add Client", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Animal List", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Animal Profile", Q_NULLPTR));
        APS_EditProfile->setText(QApplication::translate("MainWindow", "Edit Profile", Q_NULLPTR));
        APS_Back->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Add Animal", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        lineEdit_2->setText(QApplication::translate("MainWindow", "Gender", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("MainWindow", "Species", Q_NULLPTR));
        lineEdit_4->setText(QApplication::translate("MainWindow", "Breed", Q_NULLPTR));
        lineEdit_5->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        lineEdit_6->setText(QApplication::translate("MainWindow", "Weight", Q_NULLPTR));
        lineEdit_7->setText(QApplication::translate("MainWindow", "Height", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("MainWindow", "Colour", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Client List", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "Add Client", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Client Profile", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "Edit Client", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "Back", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Add Client", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("MainWindow", "First Name", Q_NULLPTR));
        lineEdit_10->setText(QApplication::translate("MainWindow", "Last Name", Q_NULLPTR));
        lineEdit_11->setText(QApplication::translate("MainWindow", "Email", Q_NULLPTR));
        lineEdit_12->setText(QApplication::translate("MainWindow", "Address", Q_NULLPTR));
        lineEdit_13->setText(QApplication::translate("MainWindow", "Phone #", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        menucuACS->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
