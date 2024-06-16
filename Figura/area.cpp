#include "area.h"
#include <QWidget>

Area::Area(QWidget *parent):QWidget(parent)
{
    setFixedSize(QSize(300,200));
    myline=new MyLine(80,100,50);
    myrect=new MyRect(220,100,50);
    alpha=0;
}
void Area::showEvent(QShowEvent *) //Определение функции showEvent, которая вызывается при отображении виджета
{
    myTimer=startTimer(50); // создать таймер
}
void Area::paintEvent(QPaintEvent *) //при переисовке виджета
{
    QPainter painter(this);
    painter.setPen(Qt::red);
    myline->move(alpha,&painter);
    myrect->move(alpha*(-0.5),&painter);
}
void Area::timerEvent(QTimerEvent *event)// при срабатывании таймера
{
    if (event->timerId() == myTimer) // если наш таймер
    {
        alpha=alpha+0.3;
        update(); // обновить внешний вид окна, функция от QWidget
    }
    else
        QWidget::timerEvent(event); // иначе передать событие для стандартной
    // обработки
}
void Area::hideEvent(QHideEvent *) //при скрытии виджета
{
    killTimer(myTimer); // уничтожить таймер
}
Area::~Area()
{
    delete myline;
    delete myrect;
}
