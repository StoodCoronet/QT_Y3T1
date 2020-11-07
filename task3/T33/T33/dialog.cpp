#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_questionBtn_clicked()
{
    switch(QMessageBox::question(this,tr("问题"),tr("已到达文档结尾，是否从头搜索？"),QMessageBox::Ok|QMessageBox::Cancel,QMessageBox::Ok))
    {
    case QMessageBox::Ok:
        ui->label->setText("Question button / OK");break;
    case QMessageBox::Cancel:
        ui->label->setText("Question button / Cancel");break;
    default:break;
    }
}



void Dialog::on_infoBtn_clicked()
{
    QMessageBox::information(this,"Infomation",tr("这是信息显示内容"));
}

void Dialog::on_warningBtn_clicked()
{
    switch (QMessageBox::warning(this,tr("警告"),tr("是否保存对文档的修改？"),
                                         QMessageBox::Save|QMessageBox::Discard|QMessageBox::Cancel,
                                         QMessageBox::Save))
    {
            case QMessageBox::Save:
                    ui->label->setText("Warning button / Save");break;
            case QMessageBox::Discard:
                    ui->label->setText("Warning button / Discard");break;
            case QMessageBox::Cancel:
                    ui->label->setText("Warning button / Cancel");break;
            default:break;
    }
}


void Dialog::on_criticalBtn_clicked()
{
    QMessageBox::critical(this,"Infomation",tr("致命错误"));
    ui->label->setText("Critical");
}

void Dialog::on_aboutQtBtn_clicked()
{
    QMessageBox::about(this,"About",tr("QMessageBox实例"));
    ui->label->setText("About QMessageBox");
}



void Dialog::on_aboutBtn_clicked()
{
    QMessageBox::aboutQt(this,"About Qt");
    ui->label->setText("About Qt QMessageBox");
}

void Dialog::on_customBtn_clicked()
{
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("Custom message box");
    QPushButton *lockButton = customMsgBox.addButton(tr("Lock"),QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("Unlock"),QMessageBox::ActionRole);
    QPushButton *cancelButton = customMsgBox.addButton(QMessageBox::Cancel);
    customMsgBox.setIconPixmap(QPixmap("D:/QT/app/task3/T33/T33/images/light.png"));
    customMsgBox.setText(tr("This is a custom message box"));
    customMsgBox.exec();
    if(customMsgBox.clickedButton()==lockButton)
    {
        ui->label->setText(" Custom MessageBox / Lock");
    }
    if(customMsgBox.clickedButton()==unlockButton)
    {

        ui->label->setText(" Custom MessageBox / Unlock");
    }
    if(customMsgBox.clickedButton()==cancelButton)
    {

        ui->label->setText(" Custom MessageBox  / Cancel");
    }

}
