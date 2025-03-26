#include <QApplication>
#include <QLabel>
#include <QImage>
#include <QPixmap>
#include "LCG.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    const int h = 500;
    const int we = 500;
    QImage image(we, h, QImage::Format_RGB32);
    QLabel label;
    LCG RGB;


    for (int i = 0; i < we; ++i) {
        for (int j = 0; j < h; ++j) {
            image.setPixel(i, j, qRgb(RGB.random(0, 255), RGB.random(0, 255), RGB.random(0, 255)));
        }
    }

    label.setPixmap(QPixmap::fromImage(image.scaled(600, 600, Qt::KeepAspectRatio, Qt::FastTransformation)));

    label.show();
    return a.exec();
}
