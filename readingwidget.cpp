/* 
 * File:   readingwidget.cpp
 * Author: tieme
 * 
 * Created on 19 May 2013, 2:43 PM
 */

#include "readingwidget.h"

readingwidget::readingwidget() : QWidget() {
    textedit = new QTextEdit();
    textedit->setReadOnly(true);
    startbutton = new QPushButton("START");
    stopbutton = new QPushButton("STOP");
    
    connect(startbutton, SIGNAL(clicked()), this, SLOT(startslot()));
    connect(stopbutton, SIGNAL(clicked()), this, SLOT(stopslot()));
    
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(textedit);
    layout->addWidget(startbutton);
    layout->addWidget(stopbutton);
    setLayout(layout);
    
    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updatereadingwidget()));
}

void readingwidget::updatereadingwidget() {
    textedit->append("reading...");
}

void readingwidget::startslot() {
    timer->start(1000);
}

void readingwidget::stopslot() {
    timer->stop();
}
