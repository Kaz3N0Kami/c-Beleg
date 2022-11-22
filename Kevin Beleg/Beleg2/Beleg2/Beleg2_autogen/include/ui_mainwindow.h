/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QGridLayout *Eingabe;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QComboBox *comboBox_3;
    QVBoxLayout *BooksAusgabe;
    QLabel *label_14;
    QTextBrowser *BP_Output;
    QTextBrowser *Books_Output;
    QVBoxLayout *CD_Ausgabe;
    QLabel *label_13;
    QTextBrowser *CDP_Output;
    QTextBrowser *CD_Output;
    QVBoxLayout *BlueRay;
    QLabel *label;
    QTextBrowser *BRP_Output;
    QTextBrowser *BR_Output;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1625, 783);
        MainWindow->setMinimumSize(QSize(1000, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Beleg2.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 47, 48);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(0, 0));
        centralwidget->setContextMenuPolicy(Qt::PreventContextMenu);
        centralwidget->setAutoFillBackground(false);
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        Eingabe = new QGridLayout();
        Eingabe->setObjectName(QString::fromUtf8("Eingabe"));
        Eingabe->setSizeConstraint(QLayout::SetFixedSize);
        Eingabe->setContentsMargins(-1, 40, -1, -1);
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setReadOnly(false);

        Eingabe->addWidget(lineEdit_5, 5, 2, 1, 1);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);
        lineEdit_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setReadOnly(false);

        Eingabe->addWidget(lineEdit_2, 0, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMouseTracking(true);
        label_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setTextInteractionFlags(Qt::NoTextInteraction);

        Eingabe->addWidget(label_3, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Eingabe->addItem(verticalSpacer_3, 2, 2, 1, 1);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(false);

        Eingabe->addWidget(lineEdit_3, 3, 2, 1, 1);

        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));

        Eingabe->addWidget(comboBox, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Eingabe->addItem(verticalSpacer, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        Eingabe->addItem(verticalSpacer_2, 4, 2, 1, 1);

        comboBox_3 = new QComboBox(centralwidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));

        Eingabe->addWidget(comboBox_3, 0, 0, 1, 1);


        gridLayout->addLayout(Eingabe, 1, 0, 1, 1);

        BooksAusgabe = new QVBoxLayout();
        BooksAusgabe->setObjectName(QString::fromUtf8("BooksAusgabe"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMouseTracking(true);
        label_14->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));
        label_14->setAlignment(Qt::AlignCenter);
        label_14->setTextInteractionFlags(Qt::NoTextInteraction);

        BooksAusgabe->addWidget(label_14);

        BP_Output = new QTextBrowser(centralwidget);
        BP_Output->setObjectName(QString::fromUtf8("BP_Output"));
        BP_Output->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        BooksAusgabe->addWidget(BP_Output);

        Books_Output = new QTextBrowser(centralwidget);
        Books_Output->setObjectName(QString::fromUtf8("Books_Output"));
        Books_Output->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        BooksAusgabe->addWidget(Books_Output);


        gridLayout->addLayout(BooksAusgabe, 1, 2, 1, 1);

        CD_Ausgabe = new QVBoxLayout();
        CD_Ausgabe->setObjectName(QString::fromUtf8("CD_Ausgabe"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMouseTracking(true);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(154, 153, 150);\n"
"border-color: rgb(255, 0, 0);"));
        label_13->setAlignment(Qt::AlignCenter);
        label_13->setTextInteractionFlags(Qt::NoTextInteraction);

        CD_Ausgabe->addWidget(label_13);

        CDP_Output = new QTextBrowser(centralwidget);
        CDP_Output->setObjectName(QString::fromUtf8("CDP_Output"));
        CDP_Output->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        CD_Ausgabe->addWidget(CDP_Output);

        CD_Output = new QTextBrowser(centralwidget);
        CD_Output->setObjectName(QString::fromUtf8("CD_Output"));
        CD_Output->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        CD_Ausgabe->addWidget(CD_Output);


        gridLayout->addLayout(CD_Ausgabe, 1, 1, 1, 1);

        BlueRay = new QVBoxLayout();
        BlueRay->setObjectName(QString::fromUtf8("BlueRay"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);\n"
"background-color: rgb(154, 153, 150);"));

        BlueRay->addWidget(label);

        BRP_Output = new QTextBrowser(centralwidget);
        BRP_Output->setObjectName(QString::fromUtf8("BRP_Output"));
        BRP_Output->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        BlueRay->addWidget(BRP_Output);

        BR_Output = new QTextBrowser(centralwidget);
        BR_Output->setObjectName(QString::fromUtf8("BR_Output"));
        BR_Output->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 245, 244);"));

        BlueRay->addWidget(BR_Output);


        gridLayout->addLayout(BlueRay, 1, 5, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        label_3->setBuddy(lineEdit_3);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit_3, comboBox);
        QWidget::setTabOrder(comboBox, lineEdit_5);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Cpp Beleg - Kevin Pietzsch", nullptr));
        lineEdit_5->setText(QString());
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Context;[Line]", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Title,Author,Person", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; color:#424242;\">Search:</span></p></body></html>", nullptr));
        lineEdit_3->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Delete CD:", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Delete Books: ", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Delete BlueRay:", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Delete Person (CD):", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Delete Person (Books):", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("MainWindow", "Delete Person (BlueRay):", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Add CD:", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Add Books:", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Add BlueRay:", nullptr));

        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ffffff;\">Books:</span></p></body></html>", nullptr));
        BP_Output->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600; color:#ffffff;\">CD:</span></p></body></html>", nullptr));
        CD_Output->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700; color:#ffffff;\">BlueRay</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
