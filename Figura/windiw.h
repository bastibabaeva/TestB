#ifndef WINDIW_H
#define WINDIW_H
#include <QtGui>
#include <QPushButton>
#include "area.h"

class Window: public QWidget
{
protected:
    QTextCodec *codec;
    Area *area; // область отображения рисунка
    QPushButton *btn;
public: Window();
};

#endif // WINDIW_H
