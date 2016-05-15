#ifndef GAMEPLAYSCENE_H
#define GAMEPLAYSCENE_H

#include "myrect.h"
#include "parameters.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QPushButton>


class GamePlayScene : public QObject, public QGraphicsScene
{
public:
    GamePlayScene();
    MyRect *rectangle;
    QGraphicsScene *play;
    QGraphicsView *view;

};

#endif // GAMEPLAYSCENE_H
