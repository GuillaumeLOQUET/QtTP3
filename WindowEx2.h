//
// Created by Guillaume LOQUET on 19/03/2020.
//

#ifndef QTTP3_WINDOWEX2_H
#define QTTP3_WINDOWEX2_H

#include <QWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QMainWindow>
#include <QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>


class WindowEx2 : public QMainWindow{
Q_OBJECT
private:
    QPushButton* fils;
    int nbrclick = 0;
    QTextEdit* text;
public:
    WindowEx2(QWidget* parent = nullptr);
public slots :
    void onclick();
    void openEx1();
};


#endif //QTTP3_WINDOWEX2_H
