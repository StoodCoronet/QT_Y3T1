#include "chqy.h"
#include <QImage>


CHqy::CHqy(QString m_bmpAddr):bmpAddr(m_bmpAddr)
{
    QImage image(bmpAddr);
    image.scaled(100,100);
    for(int i = 1;i<=100;i++){
        for(int j = 1;j<=100;j++){
            QColor c = image.pixel(i,j);
            Ma[i][j] = (c.red()+c.green()+c.blue())/3/255*17+48;
            printf("%d",Ma[i][j]);
        }
    }
}

void CHqy::mazeToArray()
{
    for(int i = 1;i<100;i++){
        for(int j = 1;j<100;j++){
            Mc[i][j] = char(Ma[i][j]);
            printf("%c",Ma[i][j]);
        }
        printf("\n");
    }
}

void CHqy::getMaze()
{
    for(int i = 0;i<100;i++){
        for(int j = 0;j<100;j++){
            asciiStr[i]+=char(Ma[j][i]);
        }
    }
}
