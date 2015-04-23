#include "circlepict.h"
#include <QtWidgets>

CirclePict::CirclePict(QWidget *parent)
    : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);

    setWindowTitle(tr("MyWidget"));
    resize(200, 200);
}

CirclePict::~CirclePict()
{

}

void CirclePict::paintEvent(QPaintEvent *)
{
    QPainter painter(this);

    QPixmap pm(100,100);
    pm.fill();


    painter.setRenderHint(QPainter::Antialiasing);

    QPen pen1(Qt::red,6);
    painter.setPen(pen1);
    QRectF rectangle(20.0,20.0,160.0,160.0);
    QRectF CircleRect(0,0,200,200);
    QRectF source(0.0,0.0,70.0,70.0);

    QPixmap pixmap(":house.png");

    painter.drawPixmap(rectangle,pixmap,source);
    painter.drawEllipse(CircleRect);


}

