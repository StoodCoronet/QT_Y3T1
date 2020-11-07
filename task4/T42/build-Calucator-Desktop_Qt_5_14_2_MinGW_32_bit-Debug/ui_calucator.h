/********************************************************************************
** Form generated from reading UI file 'calucator.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALUCATOR_H
#define UI_CALUCATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calucator
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_22;
    QPushButton *button_point;
    QPushButton *button_2;
    QPushButton *button_7;
    QPushButton *pushButton_6;
    QPushButton *button_8;
    QPushButton *pushButton_24;
    QPushButton *button_div;
    QPushButton *button_add;
    QPushButton *button_3;
    QPushButton *pushButton_2;
    QPushButton *button_5;
    QPushButton *pushButton;
    QPushButton *button_0;
    QPushButton *pushButton_12;
    QPushButton *button_1;
    QPushButton *pushButton_7;
    QPushButton *button_sub;
    QPushButton *pushButton_23;
    QPushButton *button_9;
    QPushButton *pushButton_5;
    QPushButton *button_mut;
    QPushButton *button_4;
    QPushButton *button_6;
    QPushButton *pushButton_18;
    QMenuBar *menubar;
    QMenu *menu_V;
    QMenu *menu_E;
    QMenu *menu_H;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calucator)
    {
        if (Calucator->objectName().isEmpty())
            Calucator->setObjectName(QString::fromUtf8("Calucator"));
        Calucator->resize(475, 636);
        centralwidget = new QWidget(Calucator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 429, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(10, 10, 10, 10);
        pushButton_equal = new QPushButton(verticalLayoutWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setMinimumSize(QSize(0, 140));
        pushButton_equal->setMaximumSize(QSize(70, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("Bahnschrift Light SemiCondensed"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        pushButton_equal->setFont(font);

        gridLayout_2->addWidget(pushButton_equal, 4, 4, 2, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 60));
        pushButton_4->setMaximumSize(QSize(70, 16777215));
        pushButton_4->setFont(font);

        gridLayout_2->addWidget(pushButton_4, 0, 3, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 60));
        pushButton_3->setMaximumSize(QSize(70, 16777215));
        pushButton_3->setFont(font);

        gridLayout_2->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_22 = new QPushButton(verticalLayoutWidget);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setMinimumSize(QSize(0, 60));
        pushButton_22->setMaximumSize(QSize(70, 16777215));
        pushButton_22->setFont(font);

        gridLayout_2->addWidget(pushButton_22, 1, 4, 1, 1);

        button_point = new QPushButton(verticalLayoutWidget);
        button_point->setObjectName(QString::fromUtf8("button_point"));
        button_point->setMinimumSize(QSize(0, 60));
        button_point->setMaximumSize(QSize(70, 16777215));
        button_point->setFont(font);

        gridLayout_2->addWidget(button_point, 5, 2, 1, 1);

        button_2 = new QPushButton(verticalLayoutWidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setMinimumSize(QSize(0, 60));
        button_2->setMaximumSize(QSize(70, 16777215));
        button_2->setFont(font);

        gridLayout_2->addWidget(button_2, 4, 1, 1, 1);

        button_7 = new QPushButton(verticalLayoutWidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setMinimumSize(QSize(0, 60));
        button_7->setMaximumSize(QSize(70, 16777215));
        button_7->setFont(font);

        gridLayout_2->addWidget(button_7, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 60));
        pushButton_6->setMaximumSize(QSize(70, 16777215));
        pushButton_6->setFont(font);

        gridLayout_2->addWidget(pushButton_6, 0, 0, 1, 1);

        button_8 = new QPushButton(verticalLayoutWidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setMinimumSize(QSize(0, 60));
        button_8->setMaximumSize(QSize(70, 16777215));
        button_8->setFont(font);

        gridLayout_2->addWidget(button_8, 2, 1, 1, 1);

        pushButton_24 = new QPushButton(verticalLayoutWidget);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setMinimumSize(QSize(0, 60));
        pushButton_24->setMaximumSize(QSize(70, 16777215));
        pushButton_24->setFont(font);

        gridLayout_2->addWidget(pushButton_24, 3, 4, 1, 1);

        button_div = new QPushButton(verticalLayoutWidget);
        button_div->setObjectName(QString::fromUtf8("button_div"));
        button_div->setMinimumSize(QSize(0, 60));
        button_div->setMaximumSize(QSize(70, 16777215));
        button_div->setFont(font);

        gridLayout_2->addWidget(button_div, 2, 3, 1, 1);

        button_add = new QPushButton(verticalLayoutWidget);
        button_add->setObjectName(QString::fromUtf8("button_add"));
        button_add->setMinimumSize(QSize(0, 60));
        button_add->setMaximumSize(QSize(70, 16777215));
        button_add->setFont(font);

        gridLayout_2->addWidget(button_add, 5, 3, 1, 1);

        button_3 = new QPushButton(verticalLayoutWidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setMinimumSize(QSize(0, 60));
        button_3->setMaximumSize(QSize(70, 16777215));
        button_3->setFont(font);

        gridLayout_2->addWidget(button_3, 4, 2, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 60));
        pushButton_2->setMaximumSize(QSize(70, 16777215));
        pushButton_2->setFont(font);

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        button_5 = new QPushButton(verticalLayoutWidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setMinimumSize(QSize(0, 60));
        button_5->setMaximumSize(QSize(70, 16777215));
        button_5->setFont(font);

        gridLayout_2->addWidget(button_5, 3, 1, 1, 1);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 60));
        pushButton->setMaximumSize(QSize(70, 80));
        pushButton->setFont(font);

        gridLayout_2->addWidget(pushButton, 0, 1, 1, 1);

        button_0 = new QPushButton(verticalLayoutWidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setMinimumSize(QSize(0, 60));
        button_0->setMaximumSize(QSize(140, 16777215));
        button_0->setFont(font);

        gridLayout_2->addWidget(button_0, 5, 0, 1, 2);

        pushButton_12 = new QPushButton(verticalLayoutWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(0, 60));
        pushButton_12->setMaximumSize(QSize(70, 16777215));
        pushButton_12->setFont(font);

        gridLayout_2->addWidget(pushButton_12, 1, 2, 1, 1);

        button_1 = new QPushButton(verticalLayoutWidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setMinimumSize(QSize(0, 60));
        button_1->setMaximumSize(QSize(70, 16777215));
        button_1->setFont(font);

        gridLayout_2->addWidget(button_1, 4, 0, 1, 1);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(0, 60));
        pushButton_7->setMaximumSize(QSize(70, 16777215));
        pushButton_7->setFont(font);

        gridLayout_2->addWidget(pushButton_7, 1, 0, 1, 1);

        button_sub = new QPushButton(verticalLayoutWidget);
        button_sub->setObjectName(QString::fromUtf8("button_sub"));
        button_sub->setMinimumSize(QSize(0, 60));
        button_sub->setMaximumSize(QSize(70, 16777215));
        button_sub->setFont(font);

        gridLayout_2->addWidget(button_sub, 4, 3, 1, 1);

        pushButton_23 = new QPushButton(verticalLayoutWidget);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setMinimumSize(QSize(0, 60));
        pushButton_23->setMaximumSize(QSize(70, 16777215));
        pushButton_23->setFont(font);

        gridLayout_2->addWidget(pushButton_23, 2, 4, 1, 1);

        button_9 = new QPushButton(verticalLayoutWidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setMinimumSize(QSize(0, 60));
        button_9->setMaximumSize(QSize(70, 16777215));
        button_9->setFont(font);

        gridLayout_2->addWidget(button_9, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 60));
        pushButton_5->setMaximumSize(QSize(70, 16777215));
        pushButton_5->setFont(font);

        gridLayout_2->addWidget(pushButton_5, 0, 4, 1, 1);

        button_mut = new QPushButton(verticalLayoutWidget);
        button_mut->setObjectName(QString::fromUtf8("button_mut"));
        button_mut->setMinimumSize(QSize(0, 60));
        button_mut->setMaximumSize(QSize(70, 16777215));
        button_mut->setFont(font);

        gridLayout_2->addWidget(button_mut, 3, 3, 1, 1);

        button_4 = new QPushButton(verticalLayoutWidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setMinimumSize(QSize(0, 60));
        button_4->setMaximumSize(QSize(70, 16777215));
        button_4->setFont(font);

        gridLayout_2->addWidget(button_4, 3, 0, 1, 1);

        button_6 = new QPushButton(verticalLayoutWidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setMinimumSize(QSize(0, 60));
        button_6->setMaximumSize(QSize(70, 16777215));
        button_6->setFont(font);

        gridLayout_2->addWidget(button_6, 3, 2, 1, 1);

        pushButton_18 = new QPushButton(verticalLayoutWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(0, 60));
        pushButton_18->setMaximumSize(QSize(70, 16777215));
        pushButton_18->setFont(font);

        gridLayout_2->addWidget(pushButton_18, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        Calucator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calucator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 475, 23));
        menu_V = new QMenu(menubar);
        menu_V->setObjectName(QString::fromUtf8("menu_V"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_H = new QMenu(menubar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        Calucator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calucator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calucator->setStatusBar(statusbar);

        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_H->menuAction());

        retranslateUi(Calucator);

        QMetaObject::connectSlotsByName(Calucator);
    } // setupUi

    void retranslateUi(QMainWindow *Calucator)
    {
        Calucator->setWindowTitle(QCoreApplication::translate("Calucator", "Calucator", nullptr));
        label->setText(QString());
        pushButton_equal->setText(QCoreApplication::translate("Calucator", "=", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Calucator", "M+", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Calucator", "MS", nullptr));
        pushButton_22->setText(QCoreApplication::translate("Calucator", "\342\210\232", nullptr));
        button_point->setText(QCoreApplication::translate("Calucator", ".", nullptr));
        button_2->setText(QCoreApplication::translate("Calucator", "2", nullptr));
        button_7->setText(QCoreApplication::translate("Calucator", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Calucator", "MC", nullptr));
        button_8->setText(QCoreApplication::translate("Calucator", "8", nullptr));
        pushButton_24->setText(QCoreApplication::translate("Calucator", "1/x", nullptr));
        button_div->setText(QCoreApplication::translate("Calucator", "/", nullptr));
        button_add->setText(QCoreApplication::translate("Calucator", "+", nullptr));
        button_3->setText(QCoreApplication::translate("Calucator", "3", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Calucator", "CE", nullptr));
        button_5->setText(QCoreApplication::translate("Calucator", "5", nullptr));
        pushButton->setText(QCoreApplication::translate("Calucator", "MR", nullptr));
        button_0->setText(QCoreApplication::translate("Calucator", "0", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Calucator", "C", nullptr));
        button_1->setText(QCoreApplication::translate("Calucator", "1", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Calucator", "<-", nullptr));
        button_sub->setText(QCoreApplication::translate("Calucator", "-", nullptr));
        pushButton_23->setText(QCoreApplication::translate("Calucator", "%", nullptr));
        button_9->setText(QCoreApplication::translate("Calucator", "9", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Calucator", "M-", nullptr));
        button_mut->setText(QCoreApplication::translate("Calucator", "*", nullptr));
        button_4->setText(QCoreApplication::translate("Calucator", "4", nullptr));
        button_6->setText(QCoreApplication::translate("Calucator", "6", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Calucator", "+/-", nullptr));
        menu_V->setTitle(QCoreApplication::translate("Calucator", "\346\237\245\347\234\213(&V)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("Calucator", "\347\274\226\350\276\221(&E)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("Calucator", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calucator: public Ui_Calucator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALUCATOR_H
