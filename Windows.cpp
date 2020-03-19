//
// Created by Guillaume LOQUET on 18/03/2020.
//

#include <QVBoxLayout>
#include "Windows.h"

Windows::Windows() {
    setWindowTitle("TP3 Exo1");

    this->setMinimumSize(600, 400);
    progressBar = new QProgressBar(this);
    slider =new QSlider(Qt::Horizontal, this);

    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 40, 180, 30);
    connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));


}

