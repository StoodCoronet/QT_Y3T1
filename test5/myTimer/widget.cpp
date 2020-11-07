#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QDateTime>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&Widget::timerUpdate);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::timerUpdate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd:mm:ss:dddd");
    ui->lineEdit->setText(str);
    int rand = qrand()%5;
    ui->label->setPixmap(QString("../myTimer/images/%1.png").arg(rand));
}

void Widget::on_pushButton_clicked()
{
    timer->start(1000);
}

void Widget::on_pushButton_2_clicked()
{
    timer->stop();
}
