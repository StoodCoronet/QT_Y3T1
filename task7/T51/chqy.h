#ifndef CHQY_H
#define CHQY_H
#include <QString>
#include <QBitmap>

class CHqy
{
private:
    int Ma[100][100];
    char Mc[100][100];
    char *bmp;
    QString bmpAddr;
    int width;
    int height;
    int lineByte;
    int datasize;
public:
    QString asciiStr[100];
    CHqy(QString bmpAddr);
    void mazeToArray();
    void getMaze();
};

#endif // CHQY_H
