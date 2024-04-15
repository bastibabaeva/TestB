#include "figura.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    figura w;
    w.show();
    return a.exec();
}
