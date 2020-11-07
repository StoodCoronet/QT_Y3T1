#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    updateLabel();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::updateLabel()
{
    QString temp;
    QString str_x;
    ui->xLabel->setText(str_x.setNum(x()));

    QString str_y;
    ui->yLabel->setText(str_y.setNum(y()));

    QString frameGeo;
    frameGeo = temp.setNum(frameGeometry().x())+",";
    frameGeo += temp.setNum(frameGeometry().y())+",";
    frameGeo += temp.setNum(frameGeometry().width())+",";
    frameGeo += temp.setNum(frameGeometry().height());
    ui->frameGeometry->setText(frameGeo);

    QString position;
    position = temp.setNum(pos().x())+",";
    position += temp.setNum(pos().y());
    ui->pos->setText(position);

    QString geo;
    geo = temp.setNum(geometry().x())+",";
    geo += temp.setNum(geometry().y())+",";
    geo += temp.setNum(geometry().width())+",";
    geo += temp.setNum(geometry().height());
    ui->geometry->setText(geo);

    QString w;
    ui->width->setText(w.setNum(width()));
    QString h;
    ui->height->setText(h.setNum(height()));

    QString r;
    r = temp.setNum(rect().x())+",";
    r += temp.setNum(rect().y())+",";
    r += temp.setNum(rect().width())+",";
    r += temp.setNum(rect().height());
    ui->rect->setText(r);

    QString s;
    s = temp.setNum(size().width())+",";
    s += temp.setNum(size().height());
    ui->size->setText(s);

}

void Dialog::moveEvent(QMoveEvent *)
{
    updateLabel();
}

void Dialog::resizeEvent(QResizeEvent *)
{
    updateLabel();
}
