#include "Student.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Student w;
    w.show();
    return a.exec();
}
