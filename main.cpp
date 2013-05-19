/*
 * File:   main.cpp
 * Author: tieme
 *
 * Created on 19 May 2013, 2:13 PM
 */

#include <QtGui>

#include "mainwindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    mainwindow *a = new mainwindow();
    a->show();

    return app.exec();
}
