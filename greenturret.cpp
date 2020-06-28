#include "greenturret.h"

//绿色防御塔类函数实现
//构造
GreenTurret::GreenTurret(int x, int y, int FUpLeftX, int FUpLeftY, int Fwidth, int Fheight)
{
    mx = x, my = y;
    BaseImgPath = QString(":/image/GreenBottleBase.png");
    DefImgPath = QString(":/image/GreenBottle.png");
    width = Fwidth, height = Fheight;
    UpLeftX = FUpLeftX, UpLeftY = FUpLeftY;

    Range = 200;    //射程

    BullPath = QString(":/image/Shells0.png");
    bullwidth = 30, bullheight = 30;           //子弹大小

    attack = 40;    //攻击力

    ExplRangeWidth = 65;    //爆炸效果宽高
    ExplRangeHeight = ExplRangeWidth;
}
