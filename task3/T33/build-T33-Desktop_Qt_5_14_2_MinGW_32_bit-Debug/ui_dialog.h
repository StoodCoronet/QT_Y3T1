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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *questionBtn;
    QPushButton *warningBtn;
    QPushButton *criticalBtn;
    QPushButton *aboutQtBtn;
    QPushButton *aboutBtn;
    QPushButton *customBtn;
    QPushButton *infoBtn;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(143, 111, 91, 21));
        questionBtn = new QPushButton(Dialog);
        questionBtn->setObjectName(QString::fromUtf8("questionBtn"));
        questionBtn->setGeometry(QRect(130, 160, 75, 23));
        warningBtn = new QPushButton(Dialog);
        warningBtn->setObjectName(QString::fromUtf8("warningBtn"));
        warningBtn->setGeometry(QRect(120, 210, 75, 23));
        criticalBtn = new QPushButton(Dialog);
        criticalBtn->setObjectName(QString::fromUtf8("criticalBtn"));
        criticalBtn->setGeometry(QRect(230, 160, 75, 23));
        aboutQtBtn = new QPushButton(Dialog);
        aboutQtBtn->setObjectName(QString::fromUtf8("aboutQtBtn"));
        aboutQtBtn->setGeometry(QRect(230, 210, 75, 23));
        aboutBtn = new QPushButton(Dialog);
        aboutBtn->setObjectName(QString::fromUtf8("aboutBtn"));
        aboutBtn->setGeometry(QRect(130, 250, 75, 23));
        customBtn = new QPushButton(Dialog);
        customBtn->setObjectName(QString::fromUtf8("customBtn"));
        customBtn->setGeometry(QRect(130, 300, 75, 23));
        infoBtn = new QPushButton(Dialog);
        infoBtn->setObjectName(QString::fromUtf8("infoBtn"));
        infoBtn->setGeometry(QRect(120, 340, 75, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "MessageBox", nullptr));
        questionBtn->setText(QCoreApplication::translate("Dialog", "Question", nullptr));
        warningBtn->setText(QCoreApplication::translate("Dialog", "Warning", nullptr));
        criticalBtn->setText(QCoreApplication::translate("Dialog", "Critical", nullptr));
        aboutQtBtn->setText(QCoreApplication::translate("Dialog", "About QT", nullptr));
        aboutBtn->setText(QCoreApplication::translate("Dialog", "About", nullptr));
        customBtn->setText(QCoreApplication::translate("Dialog", "Custom", nullptr));
        infoBtn->setText(QCoreApplication::translate("Dialog", "Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
