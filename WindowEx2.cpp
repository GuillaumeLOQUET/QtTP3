//
// Created by Guillaume LOQUET on 19/03/2020.
//

#include "WindowEx2.h"
#include "Windows.h"
#include <QVBoxLayout>
#include <QtWidgets>
#include <QString>
#include <iostream>
using namespace std ;

WindowEx2::WindowEx2(QWidget* parent) : QMainWindow(parent) {
    setWindowTitle("TP3 Exo2");

    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();

    this->fils = new QPushButton("Fils");

    this->text = new QTextEdit("Text initial");

    mainLayout->addWidget(fils);
    mainLayout->addWidget(text);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

    //connect(fils,SIGNAL(clicked()), qApp,SLOT(quit()));
    //connect(fils,SIGNAL(clicked()),this,SLOT(onclick()));
    connect(fils,SIGNAL(clicked()),this,SLOT(openEx1()));

}

void WindowEx2::onclick() {
    fils->setText("Parent");
    nbrclick++;
    text->insertPlainText(QString("Parent %1 \n").arg(nbrclick));

}

void WindowEx2::openEx1() {
    Windows* window = new Windows();
    window->show();
}
