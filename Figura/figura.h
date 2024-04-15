#ifndef FIGURA_H
#define FIGURA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class figura; }
QT_END_NAMESPACE

class figura : public QMainWindow
{
    Q_OBJECT

public:
    figura(QWidget *parent = nullptr);
    ~figura();

private:
    Ui::figura *ui;
};
#endif // FIGURA_H
