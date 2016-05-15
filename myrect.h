#ifndef MYRECT_H
#define MYRECT_H

#include<QGraphicsRectItem>
#include <QKeyEvent>
#include <QTimer>
#include <QObject>

class MyRect: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    MyRect();
    void generateBullet();
    void keyPressEvent(QKeyEvent *event);


signals:
    void ThePressedKeyIs(int);

public slots:
    void shootBullet();
};

#endif // MYRECT_H
