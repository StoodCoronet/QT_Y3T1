#include "qtdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTDialog w;
    w.show();
    return a.exec();
}
