#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QDialog>
#include "point.h"

QT_BEGIN_NAMESPACE
namespace Ui { class HelloDialog; }
QT_END_NAMESPACE

class HelloDialog : public QDialog
{
    Q_OBJECT

public:
    HelloDialog(QWidget *parent = nullptr);
    ~HelloDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HelloDialog *ui;
    Point *pt;
};
#endif // HELLODIALOG_H
