#include "mafa.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MAFA w;
    w.show();

    return a.exec();
}
