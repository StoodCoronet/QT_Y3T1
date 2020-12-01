#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QToolButton>
#include <QSpinBox>
#include <QMessageBox>
#include <QFileDialog>
#include <chqy.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QToolButton *newBtn = new QToolButton(this);
    newBtn ->setText(tr("新建"));
    newBtn->setStyleSheet("QToolButton{border:Opx}");
    newBtn->setIconSize(QSize(newBtn->width(),newBtn->height()));
    QPixmap newPixmap(":/myImage/images/filenew.png");
    newBtn->setIcon(newPixmap);
    ui->mainToolBar->addWidget(newBtn);

    QToolButton *openBtn = new QToolButton(this);
    openBtn ->setText(tr("新建"));
    openBtn->setStyleSheet("QToolButton{border:Opx}");
    openBtn->setIconSize(QSize(openBtn->width(),openBtn->height()));
    QPixmap openPixmap(":/myImage/images/fileopen.png");
    openBtn->setIcon(openPixmap);
    ui->mainToolBar->addWidget(openBtn);

    QToolButton *colorBtn = new QToolButton(this);
    colorBtn ->setText(tr("颜色"));
    QMenu *colorMenu = new QMenu(this);
    colorMenu->addAction(tr("红色"));
    colorMenu->addAction(tr("绿色"));
    colorBtn->setMenu(colorMenu);
    colorBtn->setPopupMode(QToolButton::MenuButtonPopup);
    ui->mainToolBar->addWidget(colorBtn);

    QSpinBox *spinBox = new QSpinBox(this);
    ui->mainToolBar->addWidget(spinBox);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_secectBtn_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("open a file."),
                "D:/QT/app/task5/images",
                tr("images(*.png *jpeg *bmp);;video files(*.avi *.mp4 *.wmv);;All files(*.*)"));
    if(filename.isEmpty()){
        QMessageBox::warning(this,"Warning!","Fail to open");
    }else{
        CHqy c(filename);
        c.mazeToArray();
        c.getMaze();
        ui->textEdit->clear();
        for(int i = 0;i<100;i++){
            ui->textEdit->insertPlainText(c.asciiStr[i]);
            ui->textEdit->insertPlainText("\n");
            ui->textEdit->setFontPointSize(5);
        }
    }
}
