#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QKeyEvent>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "mainwindow.h"

class Bullet : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();
    int bulletColorIs();
    static void initRecord();

public slots:
    void move();
    void judge(int);

private:
    int BulletColor;
    static int fail;
    static int succeed;
};

#endif // BULLET_H
