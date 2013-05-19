/* 
 * File:   readingwidget.h
 * Author: tieme
 *
 * Created on 19 May 2013, 2:43 PM
 */

#ifndef READINGWIDGET_H
#define	READINGWIDGET_H

#include <QtGui>

class readingwidget : public QWidget {
    Q_OBJECT
public:
    readingwidget();
private:
    QTextEdit *textedit;
    QPushButton *startbutton;
    QPushButton *stopbutton;

    
};

#endif	/* READINGWIDGET_H */

