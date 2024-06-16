#ifndef FIGURA_H
#define FIGURA_H
#include <QtGui>
#include <QPainter>

class Figura
{
protected:
    int x,y,halflen, dx, dy;
    virtual void draw(QPainter *Painter)=0;    
public:
    Figura(int X, int Y, int Halflen): x(X), y(Y), halflen(Halflen){}
    void move(float alpha, QPainter *Painter);

};

class MyLine: public Figura
{
protected:
    void draw(QPainter *Painter); //реализация виртуальной функции draw для класса MyLine
public:
    MyLine(int x, int y, int halflen): Figura(x,y,halflen){}
};

class MyRect: public Figura
{
protected:
    void draw(QPainter *Painter); //реализация виртуальной функции draw для класса MyRect.
public:
    MyRect(int x, int y, int halflen): Figura(x,y,halflen){}

};
#endif // FIGURA_H
