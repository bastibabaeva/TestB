#include "figura.h"
#include <math.h>

void Figura::move(float alpha, QPointer *Pointer)
{
    dx=cos(alpha)*halflen;
    dy=sin(alpha)*halflen;
    draw(Pointer);
}

void MyLine::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy);
}
void MyRect::draw(QPointer *Painter)
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy);
}
