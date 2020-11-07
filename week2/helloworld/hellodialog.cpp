#include "hellodialog.h"
#include "ui_hellodialog.h"
#include "point.h"

HelloDialog::HelloDialog(QWidget *parent)
    : QDialog(parent)
{
    pt = new Point(0,0);
    ui = new Ui::HelloDialog;
    ui->setupUi(this);
}

HelloDialog::~HelloDialog()
{
    delete ui;
    delete pt;
}


void HelloDialog::on_pushButton_clicked()
{
    pt->Add();
    pt->Show();
}
