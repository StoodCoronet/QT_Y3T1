#include "calucator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calucator w;
    w.show();
    return a.exec();
}
