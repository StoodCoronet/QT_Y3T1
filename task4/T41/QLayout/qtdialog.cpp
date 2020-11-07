#include "qtdialog.h"
#include "ui_qtdialog.h"
#include <QGridLayout>
#include <QHBoxLayout>

QTDialog::QTDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QTDialog)
{
    ui->setupUi(this);
    QString filename("D:/QT/app/task4/qqimg/qq.png");
    QImage* img=new QImage;
    if(! ( img->load(filename) ) ) //加载图像
    {
        delete img;
        return;
    }
    ui->imgLabel->setPixmap(QPixmap::fromImage(*img));
}

QTDialog::~QTDialog()
{
    delete ui;
}
