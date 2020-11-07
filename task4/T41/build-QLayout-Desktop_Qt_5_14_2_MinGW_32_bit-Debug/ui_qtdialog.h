/********************************************************************************
** Form generated from reading UI file 'qtdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDIALOG_H
#define UI_QTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QTDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *iLabel;
    QLineEdit *iLineEdit;
    QLabel *nLabel;
    QLineEdit *nLineEdit;
    QLabel *sLabel;
    QComboBox *sComboBox;
    QFormLayout *formLayout_2;
    QLabel *dLabel;
    QTextEdit *textEdit;
    QLabel *aLabel;
    QLineEdit *aLineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *imgLabel;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *QTDialog)
    {
        if (QTDialog->objectName().isEmpty())
            QTDialog->setObjectName(QString::fromUtf8("QTDialog"));
        QTDialog->resize(808, 612);
        horizontalLayout_2 = new QHBoxLayout(QTDialog);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(8);
        formLayout->setVerticalSpacing(20);
        formLayout->setContentsMargins(10, 20, 10, 10);
        iLabel = new QLabel(QTDialog);
        iLabel->setObjectName(QString::fromUtf8("iLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, iLabel);

        iLineEdit = new QLineEdit(QTDialog);
        iLineEdit->setObjectName(QString::fromUtf8("iLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, iLineEdit);

        nLabel = new QLabel(QTDialog);
        nLabel->setObjectName(QString::fromUtf8("nLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, nLabel);

        nLineEdit = new QLineEdit(QTDialog);
        nLineEdit->setObjectName(QString::fromUtf8("nLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, nLineEdit);

        sLabel = new QLabel(QTDialog);
        sLabel->setObjectName(QString::fromUtf8("sLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, sLabel);

        sComboBox = new QComboBox(QTDialog);
        sComboBox->setObjectName(QString::fromUtf8("sComboBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, sComboBox);


        verticalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setHorizontalSpacing(6);
        formLayout_2->setVerticalSpacing(10);
        formLayout_2->setContentsMargins(10, 10, 10, 10);
        dLabel = new QLabel(QTDialog);
        dLabel->setObjectName(QString::fromUtf8("dLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, dLabel);

        textEdit = new QTextEdit(QTDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, textEdit);

        aLabel = new QLabel(QTDialog);
        aLabel->setObjectName(QString::fromUtf8("aLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, aLabel);

        aLineEdit = new QLineEdit(QTDialog);
        aLineEdit->setObjectName(QString::fromUtf8("aLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, aLineEdit);

        label_3 = new QLabel(QTDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(QTDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit);


        verticalLayout_2->addLayout(formLayout_2);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(QTDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(20, 80));
        label->setMaximumSize(QSize(60, 16777215));

        horizontalLayout->addWidget(label);

        imgLabel = new QLabel(QTDialog);
        imgLabel->setObjectName(QString::fromUtf8("imgLabel"));
        imgLabel->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(imgLabel);

        pushButton = new QPushButton(QTDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        label_2 = new QLabel(QTDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        textEdit_2 = new QTextEdit(QTDialog);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        verticalLayout->addWidget(textEdit_2);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(80, 10, 10, 10);
        pushButton_3 = new QPushButton(QTDialog);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(80, 30));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(QTDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMaximumSize(QSize(80, 30));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

#if QT_CONFIG(shortcut)
        iLabel->setBuddy(iLineEdit);
        nLabel->setBuddy(nLineEdit);
        sLabel->setBuddy(sComboBox);
        aLabel->setBuddy(aLineEdit);
#endif // QT_CONFIG(shortcut)

        retranslateUi(QTDialog);

        QMetaObject::connectSlotsByName(QTDialog);
    } // setupUi

    void retranslateUi(QDialog *QTDialog)
    {
        QTDialog->setWindowTitle(QCoreApplication::translate("QTDialog", "189010413\350\203\241\345\215\277\350\277\234", nullptr));
        iLabel->setText(QCoreApplication::translate("QTDialog", "\347\224\250\346\210\267\345\220\215(&I)\357\274\232", nullptr));
        nLabel->setText(QCoreApplication::translate("QTDialog", "\345\247\223\345\220\215(&N)\357\274\232", nullptr));
        sLabel->setText(QCoreApplication::translate("QTDialog", "\346\200\247\345\210\253(&S)\357\274\232", nullptr));
        dLabel->setText(QCoreApplication::translate("QTDialog", "\351\203\250\351\227\250(D)\357\274\232", nullptr));
        aLabel->setText(QCoreApplication::translate("QTDialog", "\345\271\264\351\276\204(&A)\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("QTDialog", "\345\244\207\346\263\250:", nullptr));
        label->setText(QCoreApplication::translate("QTDialog", "\345\244\264\345\203\217\357\274\232", nullptr));
        imgLabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("QTDialog", "\346\233\264\346\215\242\345\244\264\345\203\217", nullptr));
        label_2->setText(QCoreApplication::translate("QTDialog", "\344\270\252\344\272\272\350\257\264\346\230\216\357\274\232", nullptr));
        pushButton_3->setText(QCoreApplication::translate("QTDialog", "\347\241\256\345\256\232", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QTDialog", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTDialog: public Ui_QTDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDIALOG_H
