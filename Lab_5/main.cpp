#include "bomber.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    bomber w;
    w.show();
    return a.exec();
}
