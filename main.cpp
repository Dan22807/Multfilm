#include "TXLib.h"
void drawSky(COLORREF color)
{
   //Небо
   //Цвет нач - RGB (56,200,248)
    txSetColor (TX_NULL);
    txSetFillColor (color);
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
    POINT krysha[3] = {{130, 380}, {305, 225}, {465, 380}};
          txPolygon (krysha, 3);
     //Дверной проём
    txSetColor (TX_BLACK);
    txSetFillColor (TX_GRAY);
    txRectangle (260, 450, 320, 615);

}
void drawDoor(int xDoor, int yDoor)
{
    //дверь
    //xDoor = 320
    //yDoor = 450
    txSetColor (RGB (140,85,30));
    txSetFillColor (RGB (140,85,30));
    POINT door[4] = {{260, 450}, {xDoor,yDoor}, {xDoor, yDoor+615-450}, {260,615}};
          txPolygon (door, 4);
}
void drawMan(float x, float y, float razm)
 {
    //x=650
    txSetColor (RGB(249,219,164), 5);
    txSetFillColor (RGB(249,219,164));
    txCircle(x,y,15*razm);
    txLine(x,y,x,y+80*razm);
    txLine(x,y+80*razm,x-20*razm,y+120*razm);
    txLine(x,y+80*razm,x+20*razm,y+120*razm);
    txLine(x,y+30*razm,x-20*razm,y+70*razm);
    txLine(x,y+30*razm,x+20*razm,y+70*razm);
 }
void drawCloud(int x, int y)
  {
    //x=460, y=100
    txSetColor (RGB (0,162,232));
    txSetFillColor (RGB (0,162,232));
    txEllipse (x+460-460, y+100-100, x+560-460, y+172-100);
    txEllipse (x+520-460, y+70-100, x+620-460, y+136-100);
    txEllipse (x+550-460, y+110-100, x+660-460, y+176-100);

  }
void drawTree(int x)
 {
    //x=102
    txSetColor (RGB(185,122,87));
    txSetFillColor (RGB(185,122,87));
    txRectangle (x+102-102, 360, x+125-102, 518);
    txSetColor (RGB(34,177,76));
    txSetFillColor (RGB(34,177,76));
    txEllipse (x+71-102,248,x+155-102,426);
    txEllipse (x+75-102,136,x+145-102,310);
 }
void drawBallon(int x, int y, float razm)
{
     //  x=580, y= 518
    txSetColor (TX_BLACK, 3);
    txSetFillColor (TX_WHITE);
    txCircle   (x+(530-580)*razm,y+(240-518)*razm,140*razm);
    txRectangle(x+(485-580)*razm,y+(445-518)*razm,x,y);
    txLine     (x+(485-580)*razm,y+(445-518)*razm,x+(440-580)*razm,y+(327-518)*razm);
    txLine     (x,y+(444-518)*razm,x+(618-580)*razm,y+(326-518)*razm);
   }
void drawCar(int x)
 {
txSetColor (TX_RED, 3);
txSetFillColor (TX_RED);
txRectangle (x+395-395, 600, x+590-395, 542);
txSetColor (TX_RED, 3);
txSetFillColor (RGB(140,203,244));
POINT kabina[4] = {{x+405-395, 542}, {x+429-395, 502}, {x+510-395, 502}, {x+562-395, 542}};
          txPolygon (kabina, 4);
txSetColor (TX_BLACK, 3);
txSetFillColor (TX_BLACK);
txCircle(x+432-395,601,25);
txCircle(x+561-395,601,25);

 }
 void drawCarwithMans(int x)
 {
txSetColor (TX_RED, 3);
txSetFillColor (TX_RED);
txRectangle (x+395-395, 600, x+590-395, 542);
txSetColor (TX_RED, 3);
txSetFillColor (RGB(140,203,244));
POINT kabina[4] = {{x+405-395, 542}, {x+429-395, 502}, {x+510-395, 502}, {x+562-395, 542}};
          txPolygon (kabina, 4);
txSetColor (TX_BLACK, 3);
txSetFillColor (TX_BLACK);
txCircle(x+432-395,601,25);
txCircle(x+561-395,601,25);

txSetColor (RGB(249,219,164), 5);
txSetFillColor (RGB(249,219,164));
txCircle(x+442-395,524,15);
txCircle(x+495-395,524,15);

 }
void drawRoad()
{
txSetColor (TX_GRAY);
txSetFillColor (TX_GRAY);
txRectangle (1,527,800,670);
txSetColor (TX_WHITE);
txSetFillColor (TX_WHITE);
for(int x=1; x<800; x+=150)
{
  txRectangle (x,596,x+76,612);
}
}
void drawNazvanie(int y)
{
//y=200
txSetColor (TX_WHITE);
txSetFillColor (TX_BLACK);
txSelectFont ("Comic Sans MS", 60, 40, FW_BOLD);
txDrawText   (0,y,800, y+200, "ПОКОРИТЕЛИ ГОР");
txSelectFont ("Comic Sans MS", 30);
txDrawText   (0,y+200,800, y+400, "автор:__________");
}
void drawMountains(int x, int y, float razm)
   {
    //x=626, y=161
    txSetColor (TX_BROWN);
    txSetFillColor (RGB(185,122,87));
    POINT mountains11[4] = {{x+(493-626)*razm, y+(472-161)*razm}, {x+(443-626)*razm, y+(700-161)*razm}, {x+(637-626)*razm, y+(700-161)*razm}, {x+(586-626)*razm, y+(472-161)*razm}};
    txPolygon (mountains11, 4);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT mountains12[3] = {{x+(586-626)*razm, y+(472-161)*razm}, {x+(493-626)*razm, y+(472-161)*razm}, {x+(541-626)*razm, y+(266-161)*razm}};
    txPolygon (mountains12, 3);

    txSetColor (TX_BROWN);
    txSetFillColor (RGB(185,122,87));
    POINT mountains21[4] = {{x+(505-626)*razm, y+(700-161)*razm}, {x+(745-626)*razm, y+(700-161)*razm}, {x+(670-626)*razm, y+(353-161)*razm}, {x+(583-626)*razm, y+(352-161)*razm}};
    txPolygon (mountains21, 4);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT mountains22[3] = {{x+(670-626)*razm, y+(353-161)*razm}, {x+(583-626)*razm, y+(352-161)*razm}, {x+(626-626)*razm, y+(161-161)*razm}};
    txPolygon (mountains22, 3);

    txSetColor (TX_BROWN);
    txSetFillColor (RGB(185,122,87));
    POINT mountains31[4] = {{x+(590-626)*razm, y+(700-161)*razm}, {x+(648-626)*razm, y+(510-161)*razm}, {x+(750-626)*razm, y+(510-161)*razm}, {x+(800-626)*razm, y+(700-161)*razm}};
    txPolygon (mountains31, 4);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    POINT mountains32[3] = {{x+(648-626)*razm, y+(510-161)*razm}, {x+(750-626)*razm, y+(510-161)*razm}, {x+(700-626)*razm, y+(350-161)*razm}};
    txPolygon (mountains32, 3);

   }

   void drawTitry(int y)
   {
txSetColor (TX_WHITE);
txSetFillColor (TX_BLACK);
txSelectFont ("Comic Sans MS", 60, 40, FW_BOLD);
txDrawText   (0,y,800, y+200, "КОНЕЦ");
txSelectFont ("Comic Sans MS", 20);
txDrawText   (0,y+200,800, y+400, "продюссер:__________,\n"
                                            "актёры:__________,\n\n"
                                            "озвучивали мультфильм:__________");
   }
int main()
    {
    txCreateWindow (800, 700);

    int xSun = 100;
    int ySun = 100;
    float xMan = 290;
    float yMan = 490;
    float xMan1 = 700;
    float razmMan = 1;
    int xDoor = 320;
    int yDoor = 450;
    int xCloud = 460;
    int xBallon = 580;
    int yBallon = 518;
    float razmBallon = 1;
    float razmMountains = 1;
    int xCar = 100;
    int yNazvanie = 750;
    int yTitry = 750;


    while(yNazvanie>-400)
    {
    drawSky(TX_BLACK);
    drawNazvanie(yNazvanie);
    yNazvanie -= 5;
    txSleep(10);
    }
while(xDoor>260)
    {
        txBegin();
        drawSky(RGB (56,200,248));
        drawSun(xSun, ySun);
        drawCloud(xCloud,107);
        drawCloud(xCloud+300,107);
        drawCloud(xCloud-200,207);
        drawZemlya();
        drawHome();
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);
        drawDoor(xDoor, yDoor);


        xSun = xSun + 5;
        ySun = ySun + 2;
        xDoor -= 1;
        yDoor += 1;
        xCloud -= 5;
        txEnd();
        txSleep(10);
    }



while(xMan<340)
    {
        txBegin();
        drawSky(RGB (56,200,248));
        drawSun(xSun, ySun);
        drawCloud(xCloud,107);
        drawCloud(xCloud+300,107);
        drawCloud(xCloud-200,207);
        drawZemlya();
        drawHome();
        drawMan(xMan1, yMan, razmMan);
        drawMan(xMan, yMan, razmMan);
        drawDoor(xDoor, yDoor);

        xSun = xSun + 5;
        ySun = ySun + 2;
        xMan = xMan + 5;
        xCloud -= 5;
        txEnd();
        txSleep(10);
    }

while(xDoor<320)
    {
        txBegin();
        drawSky(RGB (56,200,248));
        drawSun(xSun, ySun);
        drawCloud(xCloud,107);
        drawCloud(xCloud+300,107);
        drawCloud(xCloud-200,207);
        drawZemlya();
        drawHome();
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);
        drawDoor(xDoor, yDoor);


        xSun = xSun + 5;
        ySun = ySun + 2;
        xDoor += 1;
        yDoor -= 1;
        xCloud -= 5;



        txEnd();
        txSleep(10);
    }

while(xMan<650)
    {
        txBegin();
        drawSky(RGB (56,200,248));
        drawSun(xSun, ySun);
        drawCloud(xCloud,107);
        drawCloud(xCloud+300,107);
        drawCloud(xCloud-200,207);
        drawZemlya();
        drawHome();
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);
        drawDoor(xDoor, yDoor);


        xSun = xSun + 5;
        ySun = ySun + 2;
        xMan = xMan + 5;
        xCloud -= 5;
        txEnd();
        txSleep(10);
    }

        drawSky(RGB (0,0,125));
        drawSun(xSun, ySun);
        drawCloud(xCloud,107);
        drawCloud(xCloud+300,107);
        drawCloud(xCloud-200,207);
        drawZemlya();
        drawHome();
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);



while(xMan<900)
    {
        txBegin();
        drawSky(RGB (0,0,125));
        drawSun(xSun, ySun);
        drawCloud(xCloud,107);
        drawCloud(xCloud+300,107);
        drawCloud(xCloud-200,207);
        drawZemlya();
        drawHome();
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);
        drawDoor(xDoor, yDoor);


        xMan = xMan + 5;
        xMan1 = xMan1 + 5;

        txEnd();
        txSleep(10);
    }

    xMan = -100;
    xMan1 = -50;
    while(xMan<xCar+100)
    {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        for(int xTree=100; xTree<=600; xTree=xTree+100)
        {
            drawTree(xTree);
        }
        drawCar(xCar);
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);



        xMan = xMan + 5;
        xMan1 = xMan1 + 5;

        txEnd();
        txSleep(10);
    }
while(xCar<900)
    {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        for(int xTree=100; xTree<=600; xTree=xTree+100)
        {
        drawTree(xTree);
        }
        drawCarwithMans(xCar);



        xCar += 10;

        txEnd();
        txSleep(10);
    }
    xCar = -300;
    while(xCar<900)
    {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        for(int xTree=50; xTree<=750; xTree=xTree+80)
        {
        drawTree(xTree);
        }
        drawCarwithMans(xCar);


        xCar += 30;

        txEnd();
        txSleep(10);
    }
    xCar = -300;
    while(xCar<100)
    {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        drawBallon(xBallon,yBallon, razmBallon);
        drawCarwithMans(xCar);

        xCar += 5;

        txEnd();
        txSleep(10);
    }


    xMan = xCar;
    xMan1 = xMan + 50;
while(xMan<xBallon-70)
    {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        drawBallon(xBallon,yBallon, razmBallon);
        drawCar(xCar);
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);



        xMan = xMan + 5;
        xMan1 = xMan1 + 5;

        txEnd();
        txSleep(10);
    }

   razmMan = 1;

while(razmMan>0.5)

   {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        drawBallon(xBallon,yBallon,razmBallon);
        drawCar(xCar);
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);

        razmMan -= 0.1;



        txEnd();
        txSleep(10);
    }

while(yMan>400)

   {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        drawBallon(xBallon,yBallon,razmBallon);
        drawCar(xCar);
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);

        yMan -= 5;



        txEnd();
        txSleep(10);
    }

while(yBallon > -50)

   {
        txBegin();
        drawSky(RGB (0,0,125));
        drawZemlya();
        drawRoad();
        drawCar(xCar);
        drawMan(xMan, yMan, razmMan);
        drawMan(xMan1, yMan, razmMan);
        drawBallon(xBallon,yBallon,razmBallon);

        yBallon  -= 5;
        yMan -= 5;



        txEnd();
        txSleep(10);
    }
    xBallon = 50;
    yBallon = 650;
    razmBallon = 0.5;

    while(xBallon<635)
    {

    txBegin();
    drawSky(RGB (0,0,125));
    drawMan(xBallon-34, yBallon-45, razmBallon/2);
    drawMan(xBallon-12, yBallon-45, razmBallon/2);
    drawMountains(626,161,1);
    drawBallon(xBallon,yBallon,razmBallon);


    xBallon += 5;
    yBallon -= 4;
    razmBallon -= 0.001;

    txEnd();
    txSleep(10);
    }
    xMan = razmBallon-25;
    xMan1 = razmBallon-10;
    yMan = yBallon-45;
    while(razmBallon<1)
    {

    txBegin();
    drawSky(RGB (0,0,125));
    drawMan(xBallon-34, yMan, razmMan);
    drawMan(xBallon-12, yMan, razmMan);
    drawMountains(626,161,razmMountains);
    drawBallon(xBallon,yBallon,razmBallon);


    //xBallon += 5;
    yBallon += 5;
    razmBallon += 0.01;
    razmMountains += 0.05;
    razmMan += 0.005;
    xMan -= 0.001;
    yMan += 1;

    txEnd();
    txSleep();
    }
while(yTitry>-400)
    {
    drawSky(TX_BLACK);
    drawTitry(yTitry);
    yTitry -= 5;
    txSleep(10);
    }
    txTextCursor (false);
    return 0;
    }
