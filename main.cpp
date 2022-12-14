#include "TXLib.h"

void drawSky()
{
   //Небо
    txSetColor (RGB (56,200,248));
    txSetFillColor (RGB (56,200,248));
    txRectangle (0, 0, 800, 700);

}
void drawSun(int x, int y)
{
    //Солнце
    txSetColor (RGB (255,255,58));
    txSetFillColor (RGB (255,255,58));
    txCircle(x,y,50);
}
void drawZemlya()
{
   //Земля
    txSetColor (RGB (117,211,71));
    txSetFillColor (RGB (117,211,71));
    txRectangle (0, 520, 800, 700);
}
void drawHome()
{
    //Дом
   //Стена
    txSetColor (RGB (141,141,141));
    txSetFillColor (RGB (141,141,141));
    txRectangle (140, 380, 455, 615);
    //Дымоход
    txSetColor (RGB (111,66,17));
    txSetFillColor (RGB (111,66,17));
    txRectangle (195, 240, 230, 335);
    //Окна
    txSetColor (TX_BLACK);
    txSetFillColor (RGB (233,237,254));
    txRectangle (165, 440,245,530);
    txRectangle (351, 440, 431, 530);
    //Крыша
    txSetColor (RGB (140,85,30));
    txSetFillColor (RGB (140,85,30));
    POINT star[3] = {{130, 380}, {305, 225}, {465, 380}};
          txPolygon (star, 3);
     //Дверь
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);
    txRectangle (260, 480, 320, 615);

}

 void drawMan(int x, int y)
 {
    //x=650
    txSetColor (RGB(249,219,164), 5);
    txSetFillColor (RGB(249,219,164));
    txCircle(x+650-650,y+450-450,15);
    txLine(x+650-650,y+450-450,x+650-650,y+530-450);
    txLine(x+650-650,y+530-450,x+630-650,y+570-450);
    txLine(x+650-650,y+530-450,x+670-650,y+570-450);
    txLine(x+650-650,y+480-450,x+630-650,y+520-450);
    txLine(x+650-650,y+480-450,x+670-650,y+520-450);
 }

int main(int x)
    {
    txCreateWindow (800, 700);

    int xSun = 100;
    int ySun = 100;
    int xMan = 650;
    int yMan = 490;

    while(xSun<900)
    {
        txBegin();
        drawSky();
        drawSun(xSun, ySun);
        drawZemlya();
        drawHome();
        drawMan(xMan, yMan);

        xSun = xSun + 5;
        ySun = ySun + 5;
        xMan = xMan - 5;
        txSleep(10);
        txEnd();
    }
    txTextCursor (false);
    return 0;
    }
