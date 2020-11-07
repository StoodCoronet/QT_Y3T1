#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_questionBtn_clicked();

    void on_infoBtn_clicked();

    void on_warningBtn_clicked();

    void on_criticalBtn_clicked();

    void on_aboutQtBtn_clicked();

    void on_aboutBtn_clicked();

    void on_customBtn_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
