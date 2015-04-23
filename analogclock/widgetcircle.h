#ifndef WIDGETCIRCLE_H
#define WIDGETCIRCLE_H

#include <QObject>
#include <QWidget>
#include <QtCore>
#include <QtGui>
#include <QRectF>


class WidgetCircle : public QWidget
{
    Q_OBJECT

public:
    WidgetCircle(QWidget *parent = 0);
    ~WidgetCircle();
protected:
     void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:



};

#endif // WIDGETCIRCLE_H
