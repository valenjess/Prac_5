#ifndef BOMBER_H
#define BOMBER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class bomber; }
QT_END_NAMESPACE

class bomber : public QMainWindow
{
    Q_OBJECT

public:
    bomber(QWidget *parent = nullptr);
    ~bomber();

private:
    Ui::bomber *ui;
};
#endif // BOMBER_H
