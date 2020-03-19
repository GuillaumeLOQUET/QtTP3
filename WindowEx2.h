//
// Created by Guillaume LOQUET on 19/03/2020.
//

#ifndef QTTP3_WINDOWEX2_H
#define QTTP3_WINDOWEX2_H

#include <QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QMainWindow>
#include <QApplication>

class WindowEx2 : public QMainWindow{
Q_OBJECT
private:
    QPushButton* fils;
    int nbrclick = 0;
public:
    WindowEx2();
public slots :
    void onclick();
};


#endif //QTTP3_WINDOWEX2_H
