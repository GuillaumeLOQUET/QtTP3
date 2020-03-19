//
// Created by Guillaume LOQUET on 19/03/2020.
//

#include "WindowEx2.h"
#include <iostream>
using namespace std ;

WindowEx2::WindowEx2() {
    setWindowTitle("TP3 Exo2");

    this->setMinimumSize(600, 400);

    fils = new QPushButton("Fils",this);

    //Version 1
    //connect(fils, SIGNAL(clicked()), qApp, SLOT(quit()));

    //Version 2
    connect(fils, SIGNAL(clicked()), this, SLOT(onclick()));
}

void WindowEx2::onclick() {
    nbrclick++;
    fils->setText("Parent");
    cout << fils->text().toStdString() << nbrclick << endl ;

}
