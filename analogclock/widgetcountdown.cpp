#include "widgetcountdown.h"
#include <QtWidgets>

WidgetCountdown::WidgetCountdown(QWidget *parent)
    : QWidget(parent)
{

    frameNo =7;
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(nextAnimationFrame()));
    timer->start(1000);

    setWindowTitle(tr("MyWidget"));
    resize(200, 200);
}

WidgetCountdown::~WidgetCountdown()
{

}

void WidgetCountdown::nextAnimationFrame()
{
    --frameNo;
    update();

}

void WidgetCountdown::paintEvent(QPaintEvent *)
{
    QPainter painter(this);




    painter.setRenderHint(QPainter::Antialiasing);

    QPen pen1(Qt::red,6);
    painter.setPen(pen1);
    QRectF rectangle(20.0,20.0,100.0,100.0);
    painter.drawEllipse(rectangle);


    QPen pen2(Qt::blue,9);
    pen2.setWidth(13);
    painter.setPen(pen2);
    painter.setFont(QFont("Arial",23 ));



    if(frameNo > 0)
    painter.drawText(rectangle, Qt::AlignCenter, tr("%1\nMIN").arg(frameNo));


}

