#include <math.h>
#include "figura.h"

void Figura::move(float Alpha,QPainter *Painter)
{
    dx=halflen*cos(Alpha);   //движение фигуры по горизонтали или по оси абцисс
    dy=halflen*sin(Alpha);  //движение фигуры по вертикали или по оси ординат
    draw(Painter); // перерисовка фигуры
}
void MyLine::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x-dx,y-dy);
}
void MyRect::draw(QPainter *Painter)
{
    Painter->drawLine(x+dx,y+dy,x+dy,y-dx);  //правая грань
    Painter->drawLine(x+dy,y-dx,x-dx,y-dy);  //верхняя грань
    Painter->drawLine(x-dx,y-dy,x-dy,y+dx);  //левая грань
    Painter->drawLine(x-dy,y+dx,x+dx,y+dy); //нижняя грань
}
