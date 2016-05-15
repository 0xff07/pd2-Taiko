#ifndef SCENE_H
#define SCENE_H


#include "myrect.h"
#include "parameters.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsTextItem>

class Scene : public QGraphicsScene
{
public:
    Scene();
    MyRect *rectangle;
    QGraphicsScene *gameplay;
    QGraphicsView *view;
    QGraphicsRectItem *HitZone;
    QGraphicsTextItem *CountDownTimer;
    QGraphicsTextItem *Score;

private:
    void CountDown();

signals:
   void RemainingGameTime(int);

public slots:
    void gameOver();
    void showWindow(int);
    void showRemainingTime(int);

};

#endif // SCENE_H
