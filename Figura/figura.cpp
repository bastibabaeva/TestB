#include "figura.h"
#include "ui_figura.h"

figura::figura(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::figura)
{
    ui->setupUi(this);
}

figura::~figura()
{
    delete ui;
}

