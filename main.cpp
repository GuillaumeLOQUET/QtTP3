#include <iostream>
#include "Windows.h"
#include "WindowEx2.h"
#include <QApplication>

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    //Windows w1;
    //w1.show();

    WindowEx2 w2;
    w2.show();
    return app.exec();
}
