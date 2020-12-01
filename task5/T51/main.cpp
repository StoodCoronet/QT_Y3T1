#include "mainwindow.h"
#include <QSplashScreen>
#include <QApplication>
#include <QDateTime>
#include <windows.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QIcon icon(":/myIco/ico/cat.ico");
    QSplashScreen *splash = new QSplashScreen;
    QPixmap pix(":/myImage/images/cat.JPG");
    pix = pix.scaled(300, 300, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    splash->setPixmap(pix);
    splash->showMessage("program starting",Qt::AlignLeft,Qt::black);
    splash->show();
    Sleep(1500);
    MainWindow w;
    w.setWindowTitle("胡卿远189010413");
    w.setWindowIcon(icon);
    w.show();
    delete splash;
    return a.exec();
}
