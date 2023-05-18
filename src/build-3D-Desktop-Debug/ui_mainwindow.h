/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    Widget *myWidget;
    QPushButton *addfile;
    QLineEdit *lineEdit_moveY;
    QLineEdit *lineEdit_moveX;
    QPushButton *submitMoveX;
    QPushButton *submitRotateZ;
    QPushButton *submitRotateX;
    QPushButton *submitRotateY;
    QPushButton *submitMoveY;
    QPushButton *bigger;
    QPushButton *smaller;
    QFrame *line;
    QLineEdit *lineEdit_lineWidth;
    QLineEdit *lineEdit_pointSize;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_2;
    QFrame *line_3;
    QRadioButton *radioButton_circlePoint;
    QRadioButton *radioButton_squarePoint;
    QRadioButton *radioButton_disablePoint;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_rotationX;
    QLineEdit *lineEdit_rotationY;
    QLineEdit *lineEdit_rotationZ;
    QRadioButton *radioButton_solidLine;
    QRadioButton *radioButton_dottedLine;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *selectLineColor;
    QPushButton *selectPointColor;
    QPushButton *selectFillColor;
    QLabel *label_info;
    QPushButton *takeScreenShot;
    QPushButton *makeGif;
    QPushButton *selectBackgroundColor;
    QPushButton *switchProjection;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1220, 690);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:  rgb(211, 211, 211);\n"
"background-color:  rgb(211, 211, 211);\n"
"\n"
"\n"
"background-color: rgb(211, 211, 211);\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        myWidget = new Widget(centralwidget);
        myWidget->setObjectName(QString::fromUtf8("myWidget"));
        myWidget->setGeometry(QRect(10, 10, 700, 560));
        QFont font;
        font.setKerning(true);
        myWidget->setFont(font);
        myWidget->setFocusPolicy(Qt::ClickFocus);
        myWidget->setStyleSheet(QString::fromUtf8("border:  2px solid rgb(0, 0, 0);"));
        addfile = new QPushButton(centralwidget);
        addfile->setObjectName(QString::fromUtf8("addfile"));
        addfile->setGeometry(QRect(720, 20, 241, 71));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addfile->sizePolicy().hasHeightForWidth());
        addfile->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("ITF Devanagari"));
        font1.setPointSize(30);
        font1.setItalic(false);
        font1.setKerning(true);
        addfile->setFont(font1);
        addfile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        lineEdit_moveY = new QLineEdit(centralwidget);
        lineEdit_moveY->setObjectName(QString::fromUtf8("lineEdit_moveY"));
        lineEdit_moveY->setGeometry(QRect(990, 110, 120, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("ITF Devanagari"));
        font2.setPointSize(20);
        font2.setUnderline(false);
        lineEdit_moveY->setFont(font2);
        lineEdit_moveY->setFocusPolicy(Qt::ClickFocus);
        lineEdit_moveY->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_moveY->setText(QString::fromUtf8(""));
        lineEdit_moveY->setFrame(true);
        lineEdit_moveY->setEchoMode(QLineEdit::Normal);
        lineEdit_moveY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_moveY->setDragEnabled(true);
        lineEdit_moveY->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_moveY->setClearButtonEnabled(true);
        lineEdit_moveX = new QLineEdit(centralwidget);
        lineEdit_moveX->setObjectName(QString::fromUtf8("lineEdit_moveX"));
        lineEdit_moveX->setGeometry(QRect(740, 110, 120, 50));
        lineEdit_moveX->setFont(font2);
        lineEdit_moveX->setFocusPolicy(Qt::ClickFocus);
        lineEdit_moveX->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_moveX->setText(QString::fromUtf8(""));
        lineEdit_moveX->setFrame(true);
        lineEdit_moveX->setEchoMode(QLineEdit::Normal);
        lineEdit_moveX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_moveX->setDragEnabled(true);
        lineEdit_moveX->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_moveX->setClearButtonEnabled(true);
        submitMoveX = new QPushButton(centralwidget);
        submitMoveX->setObjectName(QString::fromUtf8("submitMoveX"));
        submitMoveX->setGeometry(QRect(870, 110, 70, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(submitMoveX->sizePolicy().hasHeightForWidth());
        submitMoveX->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamily(QString::fromUtf8("ITF Devanagari"));
        font3.setPointSize(18);
        font3.setItalic(false);
        submitMoveX->setFont(font3);
        submitMoveX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        submitRotateZ = new QPushButton(centralwidget);
        submitRotateZ->setObjectName(QString::fromUtf8("submitRotateZ"));
        submitRotateZ->setGeometry(QRect(1110, 330, 71, 41));
        sizePolicy1.setHeightForWidth(submitRotateZ->sizePolicy().hasHeightForWidth());
        submitRotateZ->setSizePolicy(sizePolicy1);
        submitRotateZ->setFont(font3);
        submitRotateZ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        submitRotateX = new QPushButton(centralwidget);
        submitRotateX->setObjectName(QString::fromUtf8("submitRotateX"));
        submitRotateX->setGeometry(QRect(1110, 210, 71, 41));
        sizePolicy1.setHeightForWidth(submitRotateX->sizePolicy().hasHeightForWidth());
        submitRotateX->setSizePolicy(sizePolicy1);
        submitRotateX->setFont(font3);
        submitRotateX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        submitRotateY = new QPushButton(centralwidget);
        submitRotateY->setObjectName(QString::fromUtf8("submitRotateY"));
        submitRotateY->setGeometry(QRect(1110, 270, 71, 41));
        sizePolicy1.setHeightForWidth(submitRotateY->sizePolicy().hasHeightForWidth());
        submitRotateY->setSizePolicy(sizePolicy1);
        submitRotateY->setFont(font3);
        submitRotateY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        submitMoveY = new QPushButton(centralwidget);
        submitMoveY->setObjectName(QString::fromUtf8("submitMoveY"));
        submitMoveY->setGeometry(QRect(1120, 110, 70, 50));
        sizePolicy1.setHeightForWidth(submitMoveY->sizePolicy().hasHeightForWidth());
        submitMoveY->setSizePolicy(sizePolicy1);
        submitMoveY->setFont(font3);
        submitMoveY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        bigger = new QPushButton(centralwidget);
        bigger->setObjectName(QString::fromUtf8("bigger"));
        bigger->setGeometry(QRect(720, 230, 51, 51));
        sizePolicy1.setHeightForWidth(bigger->sizePolicy().hasHeightForWidth());
        bigger->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamily(QString::fromUtf8("ITF Devanagari"));
        font4.setPointSize(30);
        font4.setItalic(false);
        bigger->setFont(font4);
        bigger->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        smaller = new QPushButton(centralwidget);
        smaller->setObjectName(QString::fromUtf8("smaller"));
        smaller->setGeometry(QRect(720, 290, 51, 51));
        sizePolicy1.setHeightForWidth(smaller->sizePolicy().hasHeightForWidth());
        smaller->setSizePolicy(sizePolicy1);
        smaller->setFont(font4);
        smaller->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(740, 170, 421, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lineEdit_lineWidth = new QLineEdit(centralwidget);
        lineEdit_lineWidth->setObjectName(QString::fromUtf8("lineEdit_lineWidth"));
        lineEdit_lineWidth->setGeometry(QRect(820, 450, 121, 41));
        lineEdit_lineWidth->setFont(font2);
        lineEdit_lineWidth->setFocusPolicy(Qt::ClickFocus);
        lineEdit_lineWidth->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_lineWidth->setText(QString::fromUtf8(""));
        lineEdit_lineWidth->setFrame(true);
        lineEdit_lineWidth->setEchoMode(QLineEdit::Normal);
        lineEdit_lineWidth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_lineWidth->setDragEnabled(true);
        lineEdit_lineWidth->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_lineWidth->setClearButtonEnabled(true);
        lineEdit_pointSize = new QLineEdit(centralwidget);
        lineEdit_pointSize->setObjectName(QString::fromUtf8("lineEdit_pointSize"));
        lineEdit_pointSize->setGeometry(QRect(1070, 450, 121, 41));
        lineEdit_pointSize->setFont(font2);
        lineEdit_pointSize->setFocusPolicy(Qt::ClickFocus);
        lineEdit_pointSize->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_pointSize->setText(QString::fromUtf8(""));
        lineEdit_pointSize->setFrame(true);
        lineEdit_pointSize->setEchoMode(QLineEdit::Normal);
        lineEdit_pointSize->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_pointSize->setDragEnabled(true);
        lineEdit_pointSize->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_pointSize->setClearButtonEnabled(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(730, 460, 81, 16));
        QFont font5;
        font5.setFamily(QString::fromUtf8("ITF Devanagari"));
        font5.setPointSize(18);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(980, 460, 51, 21));
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(750, 390, 421, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(950, 420, 20, 141));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        radioButton_circlePoint = new QRadioButton(centralwidget);
        radioButton_circlePoint->setObjectName(QString::fromUtf8("radioButton_circlePoint"));
        radioButton_circlePoint->setGeometry(QRect(980, 510, 99, 20));
        QFont font6;
        font6.setFamily(QString::fromUtf8("ITF Devanagari Marathi"));
        font6.setPointSize(18);
        radioButton_circlePoint->setFont(font6);
        radioButton_circlePoint->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));
        radioButton_squarePoint = new QRadioButton(centralwidget);
        radioButton_squarePoint->setObjectName(QString::fromUtf8("radioButton_squarePoint"));
        radioButton_squarePoint->setGeometry(QRect(1090, 510, 99, 20));
        radioButton_squarePoint->setFont(font5);
        radioButton_squarePoint->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));
        radioButton_disablePoint = new QRadioButton(centralwidget);
        radioButton_disablePoint->setObjectName(QString::fromUtf8("radioButton_disablePoint"));
        radioButton_disablePoint->setGeometry(QRect(1030, 540, 99, 20));
        radioButton_disablePoint->setFont(font5);
        radioButton_disablePoint->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(940, 190, 161, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_rotationX = new QLineEdit(verticalLayoutWidget);
        lineEdit_rotationX->setObjectName(QString::fromUtf8("lineEdit_rotationX"));
        lineEdit_rotationX->setFont(font2);
        lineEdit_rotationX->setFocusPolicy(Qt::ClickFocus);
        lineEdit_rotationX->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_rotationX->setText(QString::fromUtf8(""));
        lineEdit_rotationX->setFrame(true);
        lineEdit_rotationX->setEchoMode(QLineEdit::Normal);
        lineEdit_rotationX->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_rotationX->setDragEnabled(true);
        lineEdit_rotationX->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_rotationX->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_rotationX);

        lineEdit_rotationY = new QLineEdit(verticalLayoutWidget);
        lineEdit_rotationY->setObjectName(QString::fromUtf8("lineEdit_rotationY"));
        lineEdit_rotationY->setFont(font2);
        lineEdit_rotationY->setFocusPolicy(Qt::ClickFocus);
        lineEdit_rotationY->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_rotationY->setText(QString::fromUtf8(""));
        lineEdit_rotationY->setFrame(true);
        lineEdit_rotationY->setEchoMode(QLineEdit::Normal);
        lineEdit_rotationY->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_rotationY->setDragEnabled(true);
        lineEdit_rotationY->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_rotationY->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_rotationY);

        lineEdit_rotationZ = new QLineEdit(verticalLayoutWidget);
        lineEdit_rotationZ->setObjectName(QString::fromUtf8("lineEdit_rotationZ"));
        lineEdit_rotationZ->setFont(font2);
        lineEdit_rotationZ->setFocusPolicy(Qt::ClickFocus);
        lineEdit_rotationZ->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"     color:  black;\n"
"}"));
        lineEdit_rotationZ->setText(QString::fromUtf8(""));
        lineEdit_rotationZ->setFrame(true);
        lineEdit_rotationZ->setEchoMode(QLineEdit::Normal);
        lineEdit_rotationZ->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_rotationZ->setDragEnabled(true);
        lineEdit_rotationZ->setCursorMoveStyle(Qt::VisualMoveStyle);
        lineEdit_rotationZ->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_rotationZ);

        radioButton_solidLine = new QRadioButton(centralwidget);
        radioButton_solidLine->setObjectName(QString::fromUtf8("radioButton_solidLine"));
        radioButton_solidLine->setGeometry(QRect(720, 510, 99, 20));
        radioButton_solidLine->setFont(font5);
        radioButton_solidLine->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}\n"
""));
        radioButton_dottedLine = new QRadioButton(centralwidget);
        radioButton_dottedLine->setObjectName(QString::fromUtf8("radioButton_dottedLine"));
        radioButton_dottedLine->setGeometry(QRect(830, 510, 99, 20));
        radioButton_dottedLine->setFont(font5);
        radioButton_dottedLine->setStyleSheet(QString::fromUtf8("QRadioButton {\n"
"	color: black;\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(810, 410, 61, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("ITF Devanagari"));
        font7.setPointSize(24);
        label_6->setFont(font7);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1050, 410, 71, 31));
        label_7->setFont(font7);
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));
        selectLineColor = new QPushButton(centralwidget);
        selectLineColor->setObjectName(QString::fromUtf8("selectLineColor"));
        selectLineColor->setGeometry(QRect(720, 570, 151, 50));
        sizePolicy1.setHeightForWidth(selectLineColor->sizePolicy().hasHeightForWidth());
        selectLineColor->setSizePolicy(sizePolicy1);
        QFont font8;
        font8.setFamily(QString::fromUtf8("ITF Devanagari"));
        font8.setPointSize(21);
        font8.setItalic(false);
        selectLineColor->setFont(font8);
        selectLineColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        selectPointColor = new QPushButton(centralwidget);
        selectPointColor->setObjectName(QString::fromUtf8("selectPointColor"));
        selectPointColor->setGeometry(QRect(880, 570, 171, 50));
        sizePolicy1.setHeightForWidth(selectPointColor->sizePolicy().hasHeightForWidth());
        selectPointColor->setSizePolicy(sizePolicy1);
        selectPointColor->setFont(font8);
        selectPointColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        selectFillColor = new QPushButton(centralwidget);
        selectFillColor->setObjectName(QString::fromUtf8("selectFillColor"));
        selectFillColor->setGeometry(QRect(720, 630, 151, 50));
        sizePolicy1.setHeightForWidth(selectFillColor->sizePolicy().hasHeightForWidth());
        selectFillColor->setSizePolicy(sizePolicy1);
        selectFillColor->setFont(font8);
        selectFillColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        label_info = new QLabel(centralwidget);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        label_info->setGeometry(QRect(10, 580, 700, 100));
        label_info->setFont(font5);
        label_info->setStyleSheet(QString::fromUtf8("QLabel {\n"
"     border:  1px solid rgb(0, 0, 0);\n"
"     background-color: rgb(251, 245, 243);\n"
"     color:  black;\n"
"}"));
        label_info->setScaledContents(false);
        label_info->setIndent(15);
        takeScreenShot = new QPushButton(centralwidget);
        takeScreenShot->setObjectName(QString::fromUtf8("takeScreenShot"));
        takeScreenShot->setGeometry(QRect(1059, 570, 151, 51));
        sizePolicy1.setHeightForWidth(takeScreenShot->sizePolicy().hasHeightForWidth());
        takeScreenShot->setSizePolicy(sizePolicy1);
        takeScreenShot->setFont(font8);
        takeScreenShot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        makeGif = new QPushButton(centralwidget);
        makeGif->setObjectName(QString::fromUtf8("makeGif"));
        makeGif->setGeometry(QRect(1059, 630, 151, 51));
        sizePolicy1.setHeightForWidth(makeGif->sizePolicy().hasHeightForWidth());
        makeGif->setSizePolicy(sizePolicy1);
        makeGif->setFont(font8);
        makeGif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        selectBackgroundColor = new QPushButton(centralwidget);
        selectBackgroundColor->setObjectName(QString::fromUtf8("selectBackgroundColor"));
        selectBackgroundColor->setGeometry(QRect(880, 630, 171, 50));
        sizePolicy1.setHeightForWidth(selectBackgroundColor->sizePolicy().hasHeightForWidth());
        selectBackgroundColor->setSizePolicy(sizePolicy1);
        selectBackgroundColor->setFont(font8);
        selectBackgroundColor->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        switchProjection = new QPushButton(centralwidget);
        switchProjection->setObjectName(QString::fromUtf8("switchProjection"));
        switchProjection->setGeometry(QRect(980, 20, 231, 71));
        sizePolicy1.setHeightForWidth(switchProjection->sizePolicy().hasHeightForWidth());
        switchProjection->setSizePolicy(sizePolicy1);
        QFont font9;
        font9.setFamily(QString::fromUtf8("ITF Devanagari"));
        font9.setPointSize(23);
        font9.setItalic(false);
        switchProjection->setFont(font9);
        switchProjection->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     border:  3px solid rgb(0, 0, 0);\n"
"     background-color: rgb(211, 211, 211);\n"
"     color:  black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    border:  4px solid rgb(157, 134, 164);\n"
"    background-color:  rgb(189, 163, 188);\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(780, 190, 151, 191));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));

        verticalLayout_3->addWidget(label_5);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: black;\n"
"}"));

        verticalLayout_3->addWidget(label_4);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "3DV", nullptr));
        addfile->setText(QApplication::translate("MainWindow", "Select file", nullptr));
        lineEdit_moveY->setPlaceholderText(QApplication::translate("MainWindow", "Move Y   ", nullptr));
        lineEdit_moveX->setPlaceholderText(QApplication::translate("MainWindow", "Move X   ", nullptr));
        submitMoveX->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        submitRotateZ->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        submitRotateX->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        submitRotateY->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        submitMoveY->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        bigger->setText(QApplication::translate("MainWindow", "+", nullptr));
        smaller->setText(QApplication::translate("MainWindow", "-", nullptr));
        lineEdit_lineWidth->setPlaceholderText(QString());
        lineEdit_pointSize->setPlaceholderText(QString());
        label->setText(QApplication::translate("MainWindow", "Width:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Size:", nullptr));
        radioButton_circlePoint->setText(QApplication::translate("MainWindow", "  circle", nullptr));
        radioButton_squarePoint->setText(QApplication::translate("MainWindow", "  square", nullptr));
        radioButton_disablePoint->setText(QApplication::translate("MainWindow", "  disable", nullptr));
        lineEdit_rotationX->setPlaceholderText(QString());
        lineEdit_rotationY->setPlaceholderText(QString());
        lineEdit_rotationZ->setPlaceholderText(QString());
        radioButton_solidLine->setText(QApplication::translate("MainWindow", "  solid", nullptr));
        radioButton_dottedLine->setText(QApplication::translate("MainWindow", "  dotted", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Lines", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Points", nullptr));
        selectLineColor->setText(QApplication::translate("MainWindow", "Line color", nullptr));
        selectPointColor->setText(QApplication::translate("MainWindow", "Point color", nullptr));
        selectFillColor->setText(QApplication::translate("MainWindow", "Fill color", nullptr));
        label_info->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        takeScreenShot->setText(QApplication::translate("MainWindow", "Screenshot", nullptr));
        makeGif->setText(QApplication::translate("MainWindow", "Gif", nullptr));
        selectBackgroundColor->setText(QApplication::translate("MainWindow", "Background color", nullptr));
        switchProjection->setText(QApplication::translate("MainWindow", "Switch projection", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Rotate by X:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Rotate by Y:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Rotate by Z:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
