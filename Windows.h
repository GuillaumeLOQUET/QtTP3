//
// Created by Guillaume LOQUET on 18/03/2020.
//

#ifndef QTTP3_WINDOWS_H
#define QTTP3_WINDOWS_H

#include <QWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>


class Windows : public QMainWindow {
Q_OBJECT
private:
    QSlider* slider ;
    QProgressBar* progressBar ;
public:
    Windows();


};


#endif //QTTP3_WINDOWS_H
