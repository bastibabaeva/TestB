#ifndef FIGURA_H
#define FIGURA_H
#include <QtGui>
#include <QPointer>
#include <QPainter>

class Figura
{
    //Q_OBJECT
protected:
    int x,y,halflen, dx, dy,r;
    virtual void draw(QPainter *Painter)=0;
public:
    Figura(int X, int Y, int Halflen): x(X), y(Y), halflen(Halflen){}
    void move(float alpha, QPainter *Painter);
};

class MyLine: public Figura
{
protected:
    void draw(QPainter *Pointer);
public:
    MyLine(int x, int y, int halflen): Figura(x,y,halflen){}
};

class MyRect: public Figura
{
protected:
    void draw(QPainter *Pointer);
public:
    MyRect(int x, int y, int halflen): Figura(x,y,halflen){}
};
#endif // FIGURA_H
