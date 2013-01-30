#include <QtGui/QApplication>
#include "mainwindow.h"
#include "rangenode.h"
#include "rangetree.h"

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    
    return a.exec();
}
