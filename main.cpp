#include <iostream>
#include "Windows.h"
#include <QApplication>

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    Window sql;
    sql.show();
    return app.exec();
}
