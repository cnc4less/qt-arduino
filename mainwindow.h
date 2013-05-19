/* 
 * File:   mainwindow.h
 * Author: tieme
 *
 * Created on 19 May 2013, 2:23 PM
 */

#ifndef MAINWINDOW_H
#define	MAINWINDOW_H

#include <QtGui>

#include "readingwidget.h"

class mainwindow : public QMainWindow {
    Q_OBJECT
public:
    mainwindow();
private:
    readingwidget *a;
};

#endif	/* MAINWINDOW_H */

