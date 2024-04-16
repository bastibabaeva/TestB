#ifndef AREA_H
#define AREA_H
#include "figura.h"

class Area: public QWidget
{
    int myTimer;
    float alpha;
public:
    Area(QWidget *parent=0);
    ~Area();
    MyLine *myline;
    MyRect *myrect;
protected:
    void paintEvent(QPaintEvent *evevnt);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void QHideEvent(QHideEvent *event);
};
#endif // AREA_H
