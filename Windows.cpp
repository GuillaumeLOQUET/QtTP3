//
// Created by Guillaume LOQUET on 18/03/2020.
//

#include <QVBoxLayout>
#include <QtWidgets>
#include "Windows.h"

Windows::Windows() {
    setWindowTitle("TP3 Exo1");

    QWidget* mainWidget = new QWidget();
    QVBoxLayout* mainLayout = new QVBoxLayout();

    progressBar = new QProgressBar();
    progressBar->setRange(0, 100);
    progressBar->setValue(0);

    slider =new QSlider(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);

    mainLayout->addWidget(progressBar);
    mainLayout->addWidget(slider);
    mainWidget->setLayout(mainLayout);
    this->setCentralWidget(mainWidget);

    connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));


}

