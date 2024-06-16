#include "windiw.h"
#include <QVBoxLayout>

Window::Window()
{
    this->setWindowTitle("Обработка событий");
    area = new Area(this);
    btn=new QPushButton("Завершить",this); //nullptr
    //if(area!=nulptr){}
    QVBoxLayout *layout= new QVBoxLayout(this);
    layout->addWidget(area);
    layout->addWidget(btn);
    connect(btn, &QPushButton::clicked,this,&QWidget::close);
}
