/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *sellBtn;
    QPushButton *buyBtn;
    QPushButton *addBtn;
    QPushButton *queryBtn;
    QPushButton *passwordBtn;
    QStackedWidget *stackedWidget;
    QWidget *sellPage;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *sellTypeComboBox;
    QComboBox *sellBrandComboBox;
    QLineEdit *sellPriceLineEdit;
    QLineEdit *sellSumLineEdit;
    QSpinBox *sellNumSpinBox;
    QLabel *label_7;
    QLabel *sellLastNumLabel;
    QLabel *label_9;
    QPushButton *sellOkBtn;
    QPushButton *sellCancelBtn;
    QLabel *label_31;
    QWidget *page;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *goodsTypeComboBox;
    QComboBox *goodsBrandComboBox;
    QLineEdit *goodsPriceLineEdit;
    QLineEdit *goodsSumLineEdit;
    QSpinBox *goodsNumSpinBox;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *goodsOkBtn;
    QPushButton *goodsCancelBtn;
    QWidget *page_2;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QComboBox *newTypeComboBox;
    QLineEdit *newBrandLineEdit;
    QSpinBox *newPricwSpinBox;
    QSpinBox *newNumSpinBox;
    QLineEdit *newSumLineEdit;
    QLabel *label_23;
    QLabel *label_24;
    QPushButton *newOkBtn;
    QPushButton *newCancelBtn;
    QWidget *page_3;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QComboBox *queryTypeComboBox;
    QComboBox *queryBrandComboBox;
    QPushButton *queryPushBox;
    QTableView *tableView;
    QWidget *page_4;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLineEdit *oldPwdLineEdit;
    QLineEdit *newPwdLineEdit;
    QPushButton *changePwdBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(750, 500);
        sellBtn = new QPushButton(Widget);
        sellBtn->setObjectName(QString::fromUtf8("sellBtn"));
        sellBtn->setGeometry(QRect(70, 30, 70, 40));
        sellBtn->setMinimumSize(QSize(70, 40));
        sellBtn->setMaximumSize(QSize(70, 40));
        buyBtn = new QPushButton(Widget);
        buyBtn->setObjectName(QString::fromUtf8("buyBtn"));
        buyBtn->setGeometry(QRect(200, 30, 70, 40));
        buyBtn->setMinimumSize(QSize(70, 40));
        buyBtn->setMaximumSize(QSize(70, 40));
        addBtn = new QPushButton(Widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(330, 30, 70, 40));
        addBtn->setMinimumSize(QSize(70, 40));
        addBtn->setMaximumSize(QSize(70, 40));
        queryBtn = new QPushButton(Widget);
        queryBtn->setObjectName(QString::fromUtf8("queryBtn"));
        queryBtn->setGeometry(QRect(460, 30, 70, 40));
        queryBtn->setMinimumSize(QSize(70, 40));
        queryBtn->setMaximumSize(QSize(70, 40));
        passwordBtn = new QPushButton(Widget);
        passwordBtn->setObjectName(QString::fromUtf8("passwordBtn"));
        passwordBtn->setGeometry(QRect(590, 30, 70, 40));
        passwordBtn->setMinimumSize(QSize(70, 40));
        passwordBtn->setMaximumSize(QSize(70, 40));
        stackedWidget = new QStackedWidget(Widget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 70, 700, 410));
        sellPage = new QWidget();
        sellPage->setObjectName(QString::fromUtf8("sellPage"));
        label_2 = new QLabel(sellPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 54, 12));
        label_3 = new QLabel(sellPage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 130, 54, 12));
        label_4 = new QLabel(sellPage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 190, 54, 12));
        label_5 = new QLabel(sellPage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 240, 54, 12));
        label_6 = new QLabel(sellPage);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 290, 54, 12));
        sellTypeComboBox = new QComboBox(sellPage);
        sellTypeComboBox->setObjectName(QString::fromUtf8("sellTypeComboBox"));
        sellTypeComboBox->setGeometry(QRect(160, 90, 261, 21));
        sellBrandComboBox = new QComboBox(sellPage);
        sellBrandComboBox->setObjectName(QString::fromUtf8("sellBrandComboBox"));
        sellBrandComboBox->setGeometry(QRect(160, 130, 331, 21));
        sellPriceLineEdit = new QLineEdit(sellPage);
        sellPriceLineEdit->setObjectName(QString::fromUtf8("sellPriceLineEdit"));
        sellPriceLineEdit->setGeometry(QRect(160, 190, 113, 20));
        sellSumLineEdit = new QLineEdit(sellPage);
        sellSumLineEdit->setObjectName(QString::fromUtf8("sellSumLineEdit"));
        sellSumLineEdit->setGeometry(QRect(160, 290, 113, 20));
        sellNumSpinBox = new QSpinBox(sellPage);
        sellNumSpinBox->setObjectName(QString::fromUtf8("sellNumSpinBox"));
        sellNumSpinBox->setGeometry(QRect(160, 240, 111, 21));
        label_7 = new QLabel(sellPage);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 190, 54, 12));
        sellLastNumLabel = new QLabel(sellPage);
        sellLastNumLabel->setObjectName(QString::fromUtf8("sellLastNumLabel"));
        sellLastNumLabel->setGeometry(QRect(290, 240, 101, 21));
        label_9 = new QLabel(sellPage);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 290, 54, 12));
        sellOkBtn = new QPushButton(sellPage);
        sellOkBtn->setObjectName(QString::fromUtf8("sellOkBtn"));
        sellOkBtn->setGeometry(QRect(140, 340, 70, 40));
        sellOkBtn->setMinimumSize(QSize(70, 40));
        sellOkBtn->setMaximumSize(QSize(70, 40));
        sellCancelBtn = new QPushButton(sellPage);
        sellCancelBtn->setObjectName(QString::fromUtf8("sellCancelBtn"));
        sellCancelBtn->setGeometry(QRect(340, 340, 70, 40));
        sellCancelBtn->setMinimumSize(QSize(70, 40));
        sellCancelBtn->setMaximumSize(QSize(70, 40));
        label_31 = new QLabel(sellPage);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(70, 20, 561, 21));
        label_31->setFrameShape(QFrame::StyledPanel);
        label_31->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(sellPage);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 80, 54, 12));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(110, 130, 54, 12));
        label_11 = new QLabel(page);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 180, 54, 12));
        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(110, 220, 54, 12));
        label_13 = new QLabel(page);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(110, 260, 54, 12));
        goodsTypeComboBox = new QComboBox(page);
        goodsTypeComboBox->setObjectName(QString::fromUtf8("goodsTypeComboBox"));
        goodsTypeComboBox->setGeometry(QRect(200, 80, 151, 21));
        goodsBrandComboBox = new QComboBox(page);
        goodsBrandComboBox->setObjectName(QString::fromUtf8("goodsBrandComboBox"));
        goodsBrandComboBox->setGeometry(QRect(200, 130, 281, 21));
        goodsPriceLineEdit = new QLineEdit(page);
        goodsPriceLineEdit->setObjectName(QString::fromUtf8("goodsPriceLineEdit"));
        goodsPriceLineEdit->setGeometry(QRect(200, 180, 113, 20));
        goodsSumLineEdit = new QLineEdit(page);
        goodsSumLineEdit->setObjectName(QString::fromUtf8("goodsSumLineEdit"));
        goodsSumLineEdit->setGeometry(QRect(200, 260, 113, 20));
        goodsNumSpinBox = new QSpinBox(page);
        goodsNumSpinBox->setObjectName(QString::fromUtf8("goodsNumSpinBox"));
        goodsNumSpinBox->setGeometry(QRect(200, 220, 61, 21));
        label_14 = new QLabel(page);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(330, 180, 54, 12));
        label_15 = new QLabel(page);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(330, 260, 54, 12));
        label_16 = new QLabel(page);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(70, 30, 561, 21));
        label_16->setFrameShape(QFrame::StyledPanel);
        label_16->setAlignment(Qt::AlignCenter);
        goodsOkBtn = new QPushButton(page);
        goodsOkBtn->setObjectName(QString::fromUtf8("goodsOkBtn"));
        goodsOkBtn->setGeometry(QRect(150, 330, 70, 40));
        goodsOkBtn->setMinimumSize(QSize(70, 40));
        goodsOkBtn->setMaximumSize(QSize(70, 40));
        goodsCancelBtn = new QPushButton(page);
        goodsCancelBtn->setObjectName(QString::fromUtf8("goodsCancelBtn"));
        goodsCancelBtn->setGeometry(QRect(310, 330, 70, 40));
        goodsCancelBtn->setMinimumSize(QSize(70, 40));
        goodsCancelBtn->setMaximumSize(QSize(70, 40));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(70, 20, 561, 21));
        label_17->setFrameShape(QFrame::StyledPanel);
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(page_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(200, 80, 54, 12));
        label_19 = new QLabel(page_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(200, 130, 54, 12));
        label_20 = new QLabel(page_2);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(200, 180, 54, 12));
        label_21 = new QLabel(page_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(200, 230, 54, 12));
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(200, 280, 54, 12));
        newTypeComboBox = new QComboBox(page_2);
        newTypeComboBox->setObjectName(QString::fromUtf8("newTypeComboBox"));
        newTypeComboBox->setGeometry(QRect(270, 80, 171, 21));
        newBrandLineEdit = new QLineEdit(page_2);
        newBrandLineEdit->setObjectName(QString::fromUtf8("newBrandLineEdit"));
        newBrandLineEdit->setGeometry(QRect(270, 130, 231, 21));
        newPricwSpinBox = new QSpinBox(page_2);
        newPricwSpinBox->setObjectName(QString::fromUtf8("newPricwSpinBox"));
        newPricwSpinBox->setGeometry(QRect(270, 180, 101, 21));
        newPricwSpinBox->setMaximum(99999);
        newNumSpinBox = new QSpinBox(page_2);
        newNumSpinBox->setObjectName(QString::fromUtf8("newNumSpinBox"));
        newNumSpinBox->setGeometry(QRect(270, 230, 71, 21));
        newSumLineEdit = new QLineEdit(page_2);
        newSumLineEdit->setObjectName(QString::fromUtf8("newSumLineEdit"));
        newSumLineEdit->setGeometry(QRect(270, 280, 113, 20));
        label_23 = new QLabel(page_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(380, 180, 54, 12));
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(390, 280, 54, 12));
        newOkBtn = new QPushButton(page_2);
        newOkBtn->setObjectName(QString::fromUtf8("newOkBtn"));
        newOkBtn->setGeometry(QRect(220, 320, 71, 41));
        newCancelBtn = new QPushButton(page_2);
        newCancelBtn->setObjectName(QString::fromUtf8("newCancelBtn"));
        newCancelBtn->setGeometry(QRect(380, 320, 71, 41));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(70, 20, 561, 21));
        label_25->setFrameShape(QFrame::StyledPanel);
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(page_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(90, 70, 54, 12));
        label_27 = new QLabel(page_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(90, 110, 54, 12));
        queryTypeComboBox = new QComboBox(page_3);
        queryTypeComboBox->setObjectName(QString::fromUtf8("queryTypeComboBox"));
        queryTypeComboBox->setGeometry(QRect(150, 70, 131, 21));
        queryBrandComboBox = new QComboBox(page_3);
        queryBrandComboBox->setObjectName(QString::fromUtf8("queryBrandComboBox"));
        queryBrandComboBox->setGeometry(QRect(150, 110, 261, 21));
        queryPushBox = new QPushButton(page_3);
        queryPushBox->setObjectName(QString::fromUtf8("queryPushBox"));
        queryPushBox->setGeometry(QRect(490, 80, 71, 41));
        tableView = new QTableView(page_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 140, 601, 261));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        label_28 = new QLabel(page_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(70, 20, 561, 21));
        label_28->setFrameShape(QFrame::StyledPanel);
        label_28->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(page_4);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(200, 90, 54, 12));
        label_30 = new QLabel(page_4);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(200, 150, 54, 12));
        oldPwdLineEdit = new QLineEdit(page_4);
        oldPwdLineEdit->setObjectName(QString::fromUtf8("oldPwdLineEdit"));
        oldPwdLineEdit->setGeometry(QRect(270, 90, 171, 21));
        oldPwdLineEdit->setEchoMode(QLineEdit::Password);
        newPwdLineEdit = new QLineEdit(page_4);
        newPwdLineEdit->setObjectName(QString::fromUtf8("newPwdLineEdit"));
        newPwdLineEdit->setGeometry(QRect(270, 150, 171, 21));
        newPwdLineEdit->setEchoMode(QLineEdit::Password);
        changePwdBtn = new QPushButton(page_4);
        changePwdBtn->setObjectName(QString::fromUtf8("changePwdBtn"));
        changePwdBtn->setGeometry(QRect(320, 220, 71, 51));
        stackedWidget->addWidget(page_4);

        retranslateUi(Widget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "\346\225\260\346\215\256\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        sellBtn->setText(QCoreApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", nullptr));
        buyBtn->setText(QCoreApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        addBtn->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        queryBtn->setText(QCoreApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", nullptr));
        passwordBtn->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        sellLastNumLabel->setText(QCoreApplication::translate("Widget", "\345\211\251\344\275\231\346\225\260\351\207\217\357\274\232000", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        sellOkBtn->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        sellCancelBtn->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label_31->setText(QCoreApplication::translate("Widget", "\345\207\272\345\224\256\345\225\206\345\223\201", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_11->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "\345\225\206\345\223\201\345\205\245\345\272\223", nullptr));
        goodsOkBtn->setText(QCoreApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
        goodsCancelBtn->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "\345\215\225\344\273\267\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("Widget", "\346\225\260\351\207\217\357\274\232", nullptr));
        label_22->setText(QCoreApplication::translate("Widget", "\351\207\221\351\242\235\357\274\232", nullptr));
        label_23->setText(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        label_24->setText(QCoreApplication::translate("Widget", "\345\205\203", nullptr));
        newOkBtn->setText(QCoreApplication::translate("Widget", "\347\241\256\350\256\244", nullptr));
        newCancelBtn->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
        label_25->setText(QCoreApplication::translate("Widget", "\345\225\206\345\223\201\346\237\245\350\257\242", nullptr));
        label_26->setText(QCoreApplication::translate("Widget", "\347\261\273\345\236\213\357\274\232", nullptr));
        label_27->setText(QCoreApplication::translate("Widget", "\345\223\201\347\211\214\357\274\232", nullptr));
        queryPushBox->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        label_28->setText(QCoreApplication::translate("Widget", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_29->setText(QCoreApplication::translate("Widget", "\345\216\237\345\257\206\347\240\201\357\274\232", nullptr));
        label_30->setText(QCoreApplication::translate("Widget", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        changePwdBtn->setText(QCoreApplication::translate("Widget", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
