#include "widgetcircle.h"
#include <QtWidgets>



WidgetCircle::WidgetCircle(QWidget *parent)
    : QWidget(parent)
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);

    setWindowTitle(tr("MyWidget"));
    resize(200, 200);


}

WidgetCircle::~WidgetCircle()
{

}

void WidgetCircle::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    QPen pen1(Qt::red,4);
    painter.setPen(pen1);
    painter.setBrush(Qt::red);
    QRectF rectangle(20.0,20.0,70.0,70.0);
    painter.drawEllipse(rectangle);


    QPen pen2(Qt::white,9);
    painter.setPen(pen2);
    painter.setFont(QFont("Arial",20 ));
    painter.drawText(rectangle, Qt::AlignCenter, "13");

}

