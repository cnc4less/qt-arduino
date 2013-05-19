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
    
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(textedit);
    layout->addWidget(startbutton);
    layout->addWidget(stopbutton);
    setLayout(layout);
}

