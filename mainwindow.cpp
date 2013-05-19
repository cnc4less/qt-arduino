/* 
 * File:   mainwindow.cpp
 * Author: tieme
 * 
 * Created on 19 May 2013, 2:23 PM
 */

#include "mainwindow.h"

mainwindow::mainwindow() : QMainWindow() {
    setWindowTitle("Arduino");
    
    a = new readingwidget();
    
    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(a);
    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    
    setCentralWidget(widget);
}

