#include "gameplayscene.h"


GamePlayScene::GamePlayScene()
{
    play = new QGraphicsScene();
    view = new QGraphicsView();

    rectangle = new MyRect;
    rectangle->setRect(DRUM_START_X, DRUM_START_Y, DRUM_SIZE_X, DRUM_SIZE_Y);
    rectangle->setFlag(QGraphicsItem::ItemIsFocusable);
    rectangle->setFocus();
    rectangle -> generateBullet();
    play->addItem(rectangle);

    view->setScene(play);//
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(GAME_PLAY_W, GAME_PLAY_H);
    view->setSceneRect(0, 0, GAME_PLAY_W, GAME_PLAY_H);
    //view.show();
}
