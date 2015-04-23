#ifndef CIRCLEPICT_H
#define CIRCLEPICT_H

#include <QWidget>
#include <QtCore>
#include <QtGui>


class CirclePict : public QWidget
{
     Q_OBJECT

public:
    CirclePict(QWidget *parent = 0);
    ~CirclePict();
protected:
     void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

};



#endif // CIRCLEPICT_H
