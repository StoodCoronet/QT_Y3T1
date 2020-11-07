#ifndef CALUCATOR_H
#define CALUCATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Calucator; }
QT_END_NAMESPACE

class Calucator : public QMainWindow
{
    Q_OBJECT

public:
    Calucator(QWidget *parent = nullptr);
    enum FLAG_OPERATOR
    {
        FLAG_OPERATOR_NONE = 0,
        FLAG_OPERATOR_ADD,
        FLAG_OPERATOR_SUB,
        FLAG_OPERATOR_MUL,
        FLAG_OPERATOR_DIV,
        FLAG_OPERATOR_EQU
    };
    ~Calucator();

private slots:
    void on_button_0_clicked();

    void on_button_1_clicked();

    void on_button_2_clicked();

    void on_button_3_clicked();

    void on_button_4_clicked();

    void on_button_5_clicked();

    void on_button_6_clicked();

    void on_button_7_clicked();

    void on_button_8_clicked();

    void on_button_9_clicked();


    void on_button_add_clicked();

    void on_button_sub_clicked();

    void on_button_mut_clicked();

    void on_button_div_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_equal_clicked();

    void on_button_point_clicked();

private:
    Ui::Calucator *ui;
    QString currentValue;
    QString secondValue;
    QString result;
    FLAG_OPERATOR cOperator;
    void clickedNumber(const QString &string);
};
#endif // CALUCATOR_H
