#include "listpicker.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ListPicker w;
    w.show();
    return a.exec();
}
