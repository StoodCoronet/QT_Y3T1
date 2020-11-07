#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlError>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("courses");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//提交按钮
void MainWindow::on_pushButton_3_clicked()
{
    model->database().transaction();
    if(model->submitAll()){
        model->database().commit();//submit
    }else{
        model->database().rollback();//rollback
        QMessageBox::warning(this,tr("tabelModel"),tr("数据库错误：%1").arg(model->lastError().text()));
    }
}


//撤销按钮
void MainWindow::on_pushButton_4_clicked()
{
    model->revertAll();
}


//查询按钮
void MainWindow::on_pushButton_clicked()
{
    QString name = ui->lineEdit->text();
   //根据姓名筛选
    model->setFilter(QString("teacher='%1'").arg(name));
    model->select();
}


//显示全表
void MainWindow::on_pushButton_2_clicked()
{
    model->setTable("courses");
    model->select();
}



//根据id升序
void MainWindow::on_pushButton_7_clicked()
{
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}



//根据id降序
void MainWindow::on_pushButton_8_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}


//删除选中
void MainWindow::on_pushButton_6_clicked()
{
    int curRow = ui->tableView->currentIndex().row();

    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定删除当前行吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No){
        model->revertAll();
    }else{
        model->submitAll();
    }
}


//添加记录
void MainWindow::on_pushButton_5_clicked()
{
    int rowNum = model->rowCount();
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0),rowNum);
}
