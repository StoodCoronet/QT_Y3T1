#include "mainwindow.h"

#include <QApplication>
#include "connection.h"
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QProcess process;
    process.start("C:/MySQL/mysqld.exe");
    if(!createConnection()) return 1;
    MainWindow w;
    w.show();
    return a.exec();
}
