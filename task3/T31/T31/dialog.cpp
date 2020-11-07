#include "dialog.h"
#include "ui_dialog.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QColorDialog>
#include <QFontDialog>

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


void Dialog::on_pushButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("open a file."),
                "D:/QT/app/task3/qqimg",
                tr("images(*.png *jpeg *bmp);;video files(*.avi *.mp4 *.wmv);;All files(*.*)"));
    if(filename.isEmpty()){
        QMessageBox::warning(this,"Warning!","Fail to open");
    }else{
        ui->fileLineEdit->setText(filename.toLatin1());
    }
}



void Dialog::on_pushButton_2_clicked()
{
    QColor color = QColorDialog::getColor(Qt::blue);
    if(color.isValid())
    {
        ui->colorFrame->setPalette(QPalette(color));
    }
}



void Dialog::on_pushButton_3_clicked()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok);
    if(ok)
    {
        ui->fontLineEdit->setFont(font);
    }
}
