#include "calucator.h"
#include "ui_calucator.h"
#include <qDebug>

Calucator::Calucator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calucator)
{
    ui->setupUi(this);
    currentValue = "";
    secondValue = "";
    result = "";
    cOperator = FLAG_OPERATOR_NONE;
    ui->label->setText("");
}

Calucator::~Calucator()
{
    delete ui;
}

void Calucator::clickedNumber(const QString &string)
{
    currentValue += string;
    ui->label->setText(currentValue);
}


void Calucator::on_button_0_clicked()
{
    clickedNumber(ui->button_0->text());
}

void Calucator::on_button_1_clicked()
{
    clickedNumber(ui->button_1->text());
}

void Calucator::on_button_2_clicked()
{
     clickedNumber(ui->button_2->text());
}

void Calucator::on_button_3_clicked()
{
      clickedNumber(ui->button_3->text());
}

void Calucator::on_button_4_clicked()
{
     clickedNumber(ui->button_4->text());
}

void Calucator::on_button_5_clicked()
{
    clickedNumber(ui->button_5->text());
}

void Calucator::on_button_6_clicked()
{
     clickedNumber(ui->button_6->text());
}

void Calucator::on_button_7_clicked()
{
    clickedNumber(ui->button_7->text());
}

void Calucator::on_button_8_clicked()
{
     clickedNumber(ui->button_8->text());
}

void Calucator::on_button_9_clicked()
{
    clickedNumber(ui->button_9->text());
}


void Calucator::on_button_point_clicked()
{
    clickedNumber(ui->button_point->text());
}


void Calucator::on_button_add_clicked()
{
    switch (cOperator) {
    case FLAG_OPERATOR_ADD:
        secondValue = QString::number(secondValue.toDouble()+currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_SUB:
        secondValue = QString::number(secondValue.toDouble()-currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_MUL:
        secondValue = QString::number(secondValue.toDouble()*currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_DIV:
        secondValue = QString::number(secondValue.toDouble()/currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_NONE:
        secondValue = currentValue;
        currentValue = "";
        break;
    case FLAG_OPERATOR_EQU:
        break;
    }
    cOperator=FLAG_OPERATOR_ADD;
    ui->label->setText(secondValue);
}

void Calucator::on_button_sub_clicked()
{

    switch (cOperator) {
    case FLAG_OPERATOR_ADD:
        secondValue = QString::number(secondValue.toDouble()+currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_SUB:
        secondValue = QString::number(secondValue.toDouble()-currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_MUL:
        secondValue = QString::number(secondValue.toDouble()*currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_DIV:
        secondValue = QString::number(secondValue.toDouble()/currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_NONE:
        secondValue = currentValue;
        currentValue = "";
        break;
    case FLAG_OPERATOR_EQU:
        break;
    }
    cOperator=FLAG_OPERATOR_SUB;
    ui->label->setText(secondValue);
}

void Calucator::on_button_mut_clicked()
{

    switch (cOperator) {
    case FLAG_OPERATOR_ADD:
        secondValue = QString::number(secondValue.toDouble()+currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_SUB:
        secondValue = QString::number(secondValue.toDouble()-currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_MUL:
        secondValue = QString::number(secondValue.toDouble()*currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_DIV:
        secondValue = QString::number(secondValue.toDouble()/currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_NONE:
        secondValue = currentValue;
        currentValue = "";
        break;
    case FLAG_OPERATOR_EQU:
        break;
    }
    cOperator=FLAG_OPERATOR_MUL;
    ui->label->setText(secondValue);
}

void Calucator::on_button_div_clicked()
{

    switch (cOperator) {
    case FLAG_OPERATOR_ADD:
        secondValue = QString::number(secondValue.toDouble()+currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_SUB:
        secondValue = QString::number(secondValue.toDouble()-currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_MUL:
        secondValue = QString::number(secondValue.toDouble()*currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_DIV:
        secondValue = QString::number(secondValue.toDouble()/currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_NONE:
        secondValue = currentValue;
        currentValue = "";
        break;
    case FLAG_OPERATOR_EQU:
        break;
    }
    cOperator=FLAG_OPERATOR_DIV;
    ui->label->setText(secondValue);
}

void Calucator::on_pushButton_12_clicked()
{
    currentValue = "";
    secondValue = "";
    result = "";
    cOperator = FLAG_OPERATOR_NONE;
    ui->label->setText("");
}

void Calucator::on_pushButton_equal_clicked()
{
    switch (cOperator) {
    case FLAG_OPERATOR_ADD:
        secondValue = QString::number(secondValue.toDouble()+currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_SUB:
        secondValue = QString::number(secondValue.toDouble()-currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_MUL:
        secondValue = QString::number(secondValue.toDouble()*currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_DIV:
        secondValue = QString::number(secondValue.toDouble()/currentValue.toDouble());
        currentValue = "";
        break;
    case FLAG_OPERATOR_NONE:
        break;
    case FLAG_OPERATOR_EQU:
        secondValue = currentValue;
        currentValue = "";
        break;
    }
    cOperator = FLAG_OPERATOR_EQU;
    ui->label->setText(secondValue);
}
