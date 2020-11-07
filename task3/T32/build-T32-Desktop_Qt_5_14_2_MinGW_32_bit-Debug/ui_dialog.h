/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *xLabel1;
    QLabel *yLabel1;
    QLabel *frameGeometry1;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *xLabel;
    QLabel *yLabel;
    QLabel *frameGeometry;
    QLabel *pos;
    QLabel *geometry;
    QLabel *width;
    QLabel *height;
    QLabel *rect;
    QLabel *size;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(531, 491);
        xLabel1 = new QLabel(Dialog);
        xLabel1->setObjectName(QString::fromUtf8("xLabel1"));
        xLabel1->setGeometry(QRect(100, 40, 54, 12));
        yLabel1 = new QLabel(Dialog);
        yLabel1->setObjectName(QString::fromUtf8("yLabel1"));
        yLabel1->setGeometry(QRect(100, 80, 54, 12));
        frameGeometry1 = new QLabel(Dialog);
        frameGeometry1->setObjectName(QString::fromUtf8("frameGeometry1"));
        frameGeometry1->setGeometry(QRect(100, 120, 101, 16));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 160, 54, 12));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 190, 81, 16));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(100, 230, 54, 12));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(100, 270, 54, 12));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 310, 54, 12));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(100, 350, 54, 12));
        xLabel = new QLabel(Dialog);
        xLabel->setObjectName(QString::fromUtf8("xLabel"));
        xLabel->setGeometry(QRect(240, 40, 140, 16));
        xLabel->setMinimumSize(QSize(140, 0));
        xLabel->setMaximumSize(QSize(140, 16777215));
        yLabel = new QLabel(Dialog);
        yLabel->setObjectName(QString::fromUtf8("yLabel"));
        yLabel->setGeometry(QRect(240, 80, 140, 16));
        yLabel->setMinimumSize(QSize(140, 0));
        yLabel->setMaximumSize(QSize(140, 16777215));
        frameGeometry = new QLabel(Dialog);
        frameGeometry->setObjectName(QString::fromUtf8("frameGeometry"));
        frameGeometry->setGeometry(QRect(240, 120, 140, 12));
        frameGeometry->setMinimumSize(QSize(140, 0));
        frameGeometry->setMaximumSize(QSize(140, 16777215));
        pos = new QLabel(Dialog);
        pos->setObjectName(QString::fromUtf8("pos"));
        pos->setGeometry(QRect(240, 160, 140, 12));
        pos->setMinimumSize(QSize(140, 0));
        pos->setMaximumSize(QSize(140, 16777215));
        geometry = new QLabel(Dialog);
        geometry->setObjectName(QString::fromUtf8("geometry"));
        geometry->setGeometry(QRect(240, 190, 140, 12));
        geometry->setMinimumSize(QSize(140, 0));
        geometry->setMaximumSize(QSize(140, 16777215));
        width = new QLabel(Dialog);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(240, 230, 140, 12));
        width->setMinimumSize(QSize(140, 0));
        width->setMaximumSize(QSize(140, 16777215));
        height = new QLabel(Dialog);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(240, 270, 140, 20));
        height->setMinimumSize(QSize(140, 0));
        height->setMaximumSize(QSize(140, 16777215));
        rect = new QLabel(Dialog);
        rect->setObjectName(QString::fromUtf8("rect"));
        rect->setGeometry(QRect(240, 310, 140, 12));
        rect->setMinimumSize(QSize(140, 0));
        rect->setMaximumSize(QSize(140, 16777215));
        size = new QLabel(Dialog);
        size->setObjectName(QString::fromUtf8("size"));
        size->setGeometry(QRect(240, 350, 140, 12));
        size->setMinimumSize(QSize(140, 0));
        size->setMaximumSize(QSize(140, 16777215));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        xLabel1->setText(QCoreApplication::translate("Dialog", "x():", nullptr));
        yLabel1->setText(QCoreApplication::translate("Dialog", "y():", nullptr));
        frameGeometry1->setText(QCoreApplication::translate("Dialog", "frameGeometry():", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "pos():", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "geometry():", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "width():", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "height():", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "rect():", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "size():", nullptr));
        xLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        yLabel->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        frameGeometry->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        pos->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        geometry->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        width->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        height->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        rect->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        size->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
