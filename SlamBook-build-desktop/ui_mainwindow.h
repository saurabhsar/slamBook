/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Jul 4 15:11:34 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionOpen;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLabel *Name;
    QLabel *DOB;
    QLabel *nick;
    QLabel *sex;
    QLabel *label_5;
    QLabel *mobile;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *lineEdit_1;
    QDateTimeEdit *dateTimeEdit;
    QComboBox *comboBoxSex;
    QLineEdit *lineEdit_2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_6;
    QGridLayout *gridLayout_14;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_12;
    QSpacerItem *verticalSpacer_7;
    QTextEdit *textEdit_1;
    QPushButton *Clear_1;
    QGridLayout *gridLayout_7;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QPushButton *Clear_2;
    QSpacerItem *verticalSpacer_8;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_13;
    QTextEdit *textEdit_6;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QSpacerItem *verticalSpacer_9;
    QPushButton *Clear_3;
    QWidget *tab_4;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_14;
    QTextEdit *textEdit_10;
    QTextEdit *textEdit_11;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_13;
    QSpacerItem *verticalSpacer_10;
    QPushButton *Clear_4;
    QWidget *tab_5;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_17;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox_2;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(639, 543);
        MainWindow->setMinimumSize(QSize(639, 543));
        MainWindow->setMaximumSize(QSize(639, 543));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 621, 481));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 611, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_1 = new QLineEdit(gridLayoutWidget);
        lineEdit_1->setObjectName(QString::fromUtf8("lineEdit_1"));

        gridLayout_2->addWidget(lineEdit_1, 0, 1, 1, 1);

        Name = new QLabel(gridLayoutWidget);
        Name->setObjectName(QString::fromUtf8("Name"));

        gridLayout_2->addWidget(Name, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        DOB = new QLabel(gridLayoutWidget);
        DOB->setObjectName(QString::fromUtf8("DOB"));

        gridLayout_3->addWidget(DOB, 0, 0, 1, 1);

        nick = new QLabel(gridLayoutWidget);
        nick->setObjectName(QString::fromUtf8("nick"));

        dateTimeEdit = new QDateTimeEdit(gridLayoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        gridLayout_3->addWidget(dateTimeEdit, 0, 1, 1, 1);

        sex = new QLabel(gridLayoutWidget);
        sex->setObjectName(QString::fromUtf8("sex"));

        gridLayout_3->addWidget(sex, 0, 2, 1, 1);

        comboBoxSex = new QComboBox(gridLayoutWidget);
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));
        comboBoxSex->setEditable(false);

        gridLayout_3->addWidget(comboBoxSex, 0, 3, 1, 1);

        gridLayout_3->addWidget(nick, 0, 4, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 0, 5, 1, 1);




        gridLayout->addLayout(gridLayout_3, 3, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_4->addWidget(comboBox_2, 0, 1, 1, 1);

        mobile = new QLabel(gridLayoutWidget);
        mobile->setObjectName(QString::fromUtf8("mobile"));

        gridLayout_4->addWidget(mobile, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        gridLayout_4->addWidget(lineEdit_3, 0, 3, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout_4->addWidget(lineEdit_4, 0, 5, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 4, 1, 1);


        gridLayout->addLayout(gridLayout_4, 4, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setSpacing(6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_6, 2, 0, 1, 1);

        gridLayout_14 = new QGridLayout();
        gridLayout_14->setSpacing(6);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_12->addWidget(label_18);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_7);


        verticalLayout_11->addLayout(verticalLayout_12);


        gridLayout_14->addLayout(verticalLayout_11, 0, 0, 1, 1);


        //added
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setSpacing(6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        gridLayout_7->addWidget(lineEdit_5, 0, 1, 1, 1);

        lineEdit_6 = new QLineEdit(gridLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        gridLayout_7->addWidget(lineEdit_6, 0, 3, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_7->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_7->addWidget(label_14, 0, 2, 1, 1);


        gridLayout->addLayout(gridLayout_7, 5, 0, 1, 1);
        ///upto this

        textEdit_1 = new QTextEdit(gridLayoutWidget);
        textEdit_1->setObjectName(QString::fromUtf8("textEdit_1"));

        gridLayout_14->addWidget(textEdit_1, 0, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_14, 0, 0, 1, 1);

        Clear_1 = new QPushButton(gridLayoutWidget);
        Clear_1->setObjectName(QString::fromUtf8("Clear_1"));
        Clear_1->setMaximumSize(QSize(0, 0));

        gridLayout_8->addWidget(Clear_1, 1, 0, 1, 1);


        gridLayout->addLayout(gridLayout_8, 6, 0, 1, 1);

////removed from this


        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayoutWidget_3 = new QWidget(tab_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 0, 601, 451));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        textEdit_2 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout_4->addWidget(textEdit_2);

        label_10 = new QLabel(verticalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_4->addWidget(label_10);

        textEdit_3 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        verticalLayout_4->addWidget(textEdit_3);

        label_11 = new QLabel(verticalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_4->addWidget(label_11);

        textEdit_4 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_4->setObjectName(QString::fromUtf8("textEdit_4"));

        verticalLayout_4->addWidget(textEdit_4);

        label_12 = new QLabel(verticalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        textEdit_5 = new QTextEdit(verticalLayoutWidget_3);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));

        verticalLayout_4->addWidget(textEdit_5);

        Clear_2 = new QPushButton(verticalLayoutWidget_3);
        Clear_2->setObjectName(QString::fromUtf8("Clear_2"));
        Clear_2->setMaximumSize(QSize(0, 0));

        verticalLayout_4->addWidget(Clear_2);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_4 = new QWidget(tab_2);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 601, 431));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_19 = new QLabel(verticalLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_13->addWidget(label_19);

        textEdit_6 = new QTextEdit(verticalLayoutWidget_4);
        textEdit_6->setObjectName(QString::fromUtf8("textEdit_6"));

        verticalLayout_13->addWidget(textEdit_6);

        label_20 = new QLabel(verticalLayoutWidget_4);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_13->addWidget(label_20);

        textEdit_7 = new QTextEdit(verticalLayoutWidget_4);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));

        verticalLayout_13->addWidget(textEdit_7);

        label_21 = new QLabel(verticalLayoutWidget_4);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_13->addWidget(label_21);

        textEdit_8 = new QTextEdit(verticalLayoutWidget_4);
        textEdit_8->setObjectName(QString::fromUtf8("textEdit_8"));

        verticalLayout_13->addWidget(textEdit_8);

        label_22 = new QLabel(verticalLayoutWidget_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_13->addWidget(label_22);

        textEdit_9 = new QTextEdit(verticalLayoutWidget_4);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));

        verticalLayout_13->addWidget(textEdit_9);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_9);

        Clear_3 = new QPushButton(tab_2);
        Clear_3->setObjectName(QString::fromUtf8("Clear_3"));
        Clear_3->setGeometry(QRect(110, 440, 0, 0));
        Clear_3->setMaximumSize(QSize(0, 0));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayoutWidget_5 = new QWidget(tab_4);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(10, 10, 601, 431));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_23 = new QLabel(verticalLayoutWidget_5);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_14->addWidget(label_23);

        textEdit_10 = new QTextEdit(verticalLayoutWidget_5);
        textEdit_10->setObjectName(QString::fromUtf8("textEdit_10"));

        verticalLayout_14->addWidget(textEdit_10);

        label_24 = new QLabel(verticalLayoutWidget_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_14->addWidget(label_24);

        textEdit_11 = new QTextEdit(verticalLayoutWidget_5);
        textEdit_11->setObjectName(QString::fromUtf8("textEdit_11"));

        verticalLayout_14->addWidget(textEdit_11);

        label_25 = new QLabel(verticalLayoutWidget_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_14->addWidget(label_25);

        textEdit_12 = new QTextEdit(verticalLayoutWidget_5);
        textEdit_12->setObjectName(QString::fromUtf8("textEdit_12"));

        verticalLayout_14->addWidget(textEdit_12);

        label_26 = new QLabel(verticalLayoutWidget_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_14->addWidget(label_26);

        textEdit_13 = new QTextEdit(verticalLayoutWidget_5);
        textEdit_13->setObjectName(QString::fromUtf8("textEdit_13"));

        verticalLayout_14->addWidget(textEdit_13);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_10);

        Clear_4 = new QPushButton(tab_4);
        Clear_4->setObjectName(QString::fromUtf8("Clear_4"));
        Clear_4->setGeometry(QRect(110, 440, 0, 0));
        Clear_4->setMaximumSize(QSize(0, 0));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayoutWidget_6 = new QWidget(tab_5);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(10, 10, 601, 61));
        verticalLayout_16 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(verticalLayoutWidget_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_16->addWidget(label_27);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setSpacing(6);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        pushButton = new QPushButton(verticalLayoutWidget_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_17->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_17->addWidget(pushButton_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_17->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout_16->addLayout(gridLayout_17);

        groupBox = new QGroupBox(tab_5);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 210, 601, 201));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 581, 171));
        groupBox_2 = new QGroupBox(tab_5);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 80, 601, 131));
        textBrowser_2 = new QTextBrowser(groupBox_2);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 20, 581, 101));
        pushButton_3 = new QPushButton(tab_5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 410, 97, 27));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 639, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionQuit);
        menuFile->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Slam Book", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0, QApplication::UnicodeUTF8));
        Name->setText(QApplication::translate("MainWindow", "Name  ", 0, QApplication::UnicodeUTF8));
        DOB->setText(QApplication::translate("MainWindow", "DOB     ", 0, QApplication::UnicodeUTF8));
        nick->setText(QApplication::translate("MainWindow", "Nick", 0, QApplication::UnicodeUTF8));
        sex->setText(QApplication::translate("MainWindow", "Sex", 0, QApplication::UnicodeUTF8));
        comboBoxSex->clear();
        comboBoxSex->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "--", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "F", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("MainWindow", "Zodiac", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Aries", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Taurus", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Gemini", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Cancer", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Leo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Virgo", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Libra", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Scorpio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Sagittarius", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Capricorn", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Aquarius", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Pisces", 0, QApplication::UnicodeUTF8)
        );
        mobile->setText(QApplication::translate("MainWindow", "Mobile", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Home", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "About  ", 0, QApplication::UnicodeUTF8));
        Clear_1->setText(QApplication::translate("MainWindow", "&Clear", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "email   ", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "Website ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "&Personal", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "You are crazy about (like your date)", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Your see Romance, Love, God as", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Some unforgettable days", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Something you hate to tell ", 0, QApplication::UnicodeUTF8));
        Clear_2->setText(QApplication::translate("MainWindow", "&Clear", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "&Introspection", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Favourite Movies", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "You would like to hear", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "Best books you have read", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Hobbies / Interests", 0, QApplication::UnicodeUTF8));
        Clear_3->setText(QApplication::translate("MainWindow", "&Clear", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "&Activities", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "for you, I am", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindow", "Most memorable and delightful moments with me", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "You hate me for, common, I can't be perfect", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "something for me, You wanna say", 0, QApplication::UnicodeUTF8));
        Clear_4->setText(QApplication::translate("MainWindow", "&Clear", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "About &me", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "You would like to", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "&Submit", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "&Reset", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", " Licence ", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">                    GNU GENERAL PUBLIC LICENSE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">                       Version 3, 29 June 2007</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9"
                        "pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\"> Copyright (C) 2007 Free Software Foundation, Inc. &lt;http://fsf.org/&gt;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\"> Everyone is permitted to copy and distribute verbatim copies</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\"> of this license document, but changing it is not allowed.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">                            Preamble</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  The GNU General Public License is a free, copyleft license for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">software and other kinds of works.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  The licenses for most software and other practical works are designed</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">to take away your freedom to share and change the works.  By contrast,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">the GNU General Public License is intended to guarantee your freedom to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">share and change all versions of a program--to make sure it remains free</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">software for all its users.  We, the Free Software Foundation, use the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">GNU General Public License for most of our software; it applies also to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">any other work released this way by its authors.  You can apply it to</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">your programs, too.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  When we speak of free software, we are referring to freedom, not</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">price.  Our General Public Licenses are designed to make sure that you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin"
                        "-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">have the freedom to distribute copies of free software (and charge for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">them if you wish), that you receive source code or can get it if you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">want it, that you can change the software or use pieces of it in new</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">free programs, and that you know you can do these things.</span></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  To protect your rights, we need to prevent others from denying you</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">these rights or asking you to surrender the rights.  Therefore, you have</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">certain responsibilities if you distribute copies of the software, or if</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">you modify it: responsibilities to respect the freedom of others.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  For example, if you distribute copies of such a program, whether</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">gratis or for a fee, you must pass on to the recipients the same</span></p>\n"
"<p style=\" m"
                        "argin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">freedoms that you received.  You must make sure that they, too, receive</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">or can get the source code.  And you must show them these terms so they</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">know their rights.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  Developers that use the GNU GPL protect your rights with two steps:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">(1) assert copyright on the software, and (2) offer you this License</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">giving you legal permission to copy, distribute and/or modify it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; mar"
                        "gin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  For the developers' and authors' protection, the GPL clearly explains</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">that there is no warranty for this free software.  For both users' and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">authors' sake, the GPL requires that modified versions be marked as</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">changed, so that their problems will not be attributed erroneously to</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">authors of previous versions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  Some devices are designed to deny users access to install or run</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">modified versions of the software inside them, although the manufacturer</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom"
                        ":0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">can do so.  This is fundamentally incompatible with the aim of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">protecting users' freedom to change the software.  The systematic</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">pattern of such abuse occurs in the area of products for individuals to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">use, which is precisely where it is most unacceptable.  Therefore, w"
                        "e</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">have designed this version of the GPL to prohibit the practice for those</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">products.  If such problems arise substantially in other domains, we</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">stand ready to extend this provision to those domains in future versions</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt"
                        ";\">of the GPL, as needed to protect the freedom of users.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  Finally, every program is threatened constantly by software patents.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">States should not allow patents to restrict development and use of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">software on ge"
                        "neral-purpose computers, but in those that do, we wish to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">avoid the special danger that patents applied to a free program could</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">make it effectively proprietary.  To prevent this, the GPL assures that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">patents cannot be used to render the program non-free.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; fo"
                        "nt-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  The precise terms and conditions for copying, distribution and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">modification follow.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">                       TERMS AND CONDITIONS</span></p>\n"
"<p style=\"-qt-paragra"
                        "ph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  0. Definitions.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  &quot;This License&quot; refers to version 3 of the GNU General Public License.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text"
                        "-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  &quot;Copyright&quot; also means copyright-like laws that apply to other kinds of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">works, such as semiconductor masks.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  &quot;The Program&quot; refers"
                        " to any copyrightable work licensed under this</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">License.  Each licensee is addressed as &quot;you&quot;.  &quot;Licensees&quot; and</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">&quot;recipients&quot; may be individuals or organizations.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  To &quot;modify&qu"
                        "ot; a work means to copy from or adapt all or part of the work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">in a fashion requiring copyright permission, other than the making of an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">exact copy.  The resulting work is called a &quot;modified version&quot; of the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">earlier work or a work &quot;based on&quot; the earlier work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent"
                        ":0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  A &quot;covered work&quot; means either the unmodified Program or a work based</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">on the Program.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  To &quot;propagate&quot; a work means to do a"
                        "nything with it that, without</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">permission, would make you directly or secondarily liable for</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">infringement under applicable copyright law, except executing it on a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">computer or modifying a private copy.  Propagation includes copying,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier';"
                        " font-size:9pt;\">distribution (with or without modification), making available to the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">public, and in some countries other activities as well.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  To &quot;convey&quot; a work means any kind of propagation that enables other</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-"
                        "size:9pt;\">parties to make or receive copies.  Mere interaction with a user through</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">a computer network, with no transfer of a copy, is not conveying.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  An interactive user interface displays &quot;Appropriate Legal Notices&quot;</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'"
                        "; font-size:9pt;\">to the extent that it includes a convenient and prominently visible</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">feature that (1) displays an appropriate copyright notice, and (2)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">tells the user that there is no warranty for the work (except to the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">extent that warranties are provided), that licensees may convey the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-ind"
                        "ent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">work under this License, and how to view a copy of this License.  If</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">the interface presents a list of user commands or options, such as a</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">menu, a prominent item in the list meets this criterion.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span"
                        " style=\" font-family:'Courier New,courier'; font-size:9pt;\">  1. Source Code.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  The &quot;source code&quot; for a work means the preferred form of the work</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">for making modifications to it.  &quot;Object code&quot; means any non-source</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,co"
                        "urier'; font-size:9pt;\">form of a work.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  A &quot;Standard Interface&quot; means an interface that either is an official</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">standard defined by a recognized standards body, or, in the case of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">interfaces specified "
                        "for a particular programming language, one that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">is widely used among developers working in that language.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  The &quot;System Libraries&quot; of an executable work include anything, other</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">than the work as a whole"
                        ", that (a) is included in the normal form of</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">packaging a Major Component, but which is not part of that Major</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">Component, and (b) serves only to enable use of the work with that</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">Major Component, or to implement a Standard Interface for which an</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier "
                        "New,courier'; font-size:9pt;\">implementation is available to the public in source code form.  A</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">&quot;Major Component&quot;, in this context, means a major essential component</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">(kernel, window system, and so on) of the specific operating system</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">(if any) on which the executable work runs, or a compiler used to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">produce the work, or an object code interpreter used to run it.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">  The &quot;Corresponding Source&quot; for a work in object code form means all</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">the source code needed to generate, install, and (for an executable</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-blo"
                        "ck-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">work) run the object code and to modify the work, including scripts to</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">control those activities.  However, it does not include the work's</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">System Libraries, or general-purpose tools or generally available free</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">programs which a</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Author", 0, QApplication::UnicodeUTF8));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    This is a simple Slam Book application written in C++</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    Copyright (C) 2011   Saurabh Arai"
                        "yer,  sizzsa(at)gmail(dot)com</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    http://www.decapsulatingabstraction.blogspot.com/</span></p>\n""<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    This program is free software: you can redistribute it and/or modify</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    it under the terms of the GNU General Public License as published by</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    the Free Software Foundation"
                        ", either version 3 of the License, or</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    any later version.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    This program is distributed in the hope that it will be useful,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    but WITHOUT ANY WARRANTY; without even the implied warranty of</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    GNU General Public License for more details.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier New,courier'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    You should have received a copy of the GNU General Public License</span></p>\n"
"<p style=\" margin-top:0px"
                        "; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier New,courier'; font-size:9pt;\">    along with this program.  If not, see &lt;http://www.gnu.org/licenses/&gt;.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "S&ubmit", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H