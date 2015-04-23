#ifndef WIDGETCOUNTDOWN_H
#define WIDGETCOUNTDOWN_H

#include <QObject>
#include <QWidget>
#include <QtCore>
#include <QtGui>



class WidgetCountdown : public QWidget
{
    Q_OBJECT
public:
    WidgetCountdown(QWidget *parent = 0);
    ~WidgetCountdown();

public slots:
    void nextAnimationFrame();

protected:
     void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
    int frameNo;

};

#endif // WIDGETCOUNTDOWN_H
