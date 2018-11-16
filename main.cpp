#include "todowindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    todoWindow w;
    w.show();

    return a.exec();
}
