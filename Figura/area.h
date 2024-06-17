#ifndef AREA_H
#define AREA_H
#include "figura.h"
#include <QWidget>

class Area: public QWidget
{
    int myTimer; //индетификатор таймера
    float alpha; //угол поворота
public:
    Area(QWidget *parent=0);
    ~Area();
    MyLine *myline;
    MyRect *myrect;
protected:    
    void paintEvent(QPaintEvent *event); //метод, который вызовется при перерисовки виджета
    void timerEvent(QTimerEvent *event); //метод, который вызовется при срабатывания таймера
    void showEvent(QShowEvent *event); //метод, который вызовется при показе виджета
    void hideEvent(QHideEvent *event); //метод, который вызовется при скрытии виджета
};
#endif // AREA_H
