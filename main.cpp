#include "mainwindow.h"
#include "myrect.h"
#include "parameters.h"
#include "scene.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QPushButton>
#include <QObject>
#include <QLCDNumber>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow *w = new MainWindow();

    //Scene *scene = new Scene();
    w->scene->rectangle->setFlag(QGraphicsItem::ItemIsFocusable);
    w->scene->rectangle->setFocus();




    /* Game part */
    w->show();




    return a.exec();


    /* Add the pattern generater to scene */
    /* to be added in constructor of GamePlayScene */
    /*
      QGraphicsScene *scene = new QGraphicsScene();
      MyRect *rectangle = new MyRect;
      rectangle->setRect(DRUM_START_X, DRUM_START_Y, DRUM_SIZE_X, DRUM_SIZE_Y);
      rectangle->setFlag(QGraphicsItem::ItemIsFocusable);
      rectangle->setFocus();
      rectangle -> generateBullet();
      scene->addItem(rectangle);
    */

    /* set the size and policy for gamplay */
    /*
    view->setScene(scene->gameplay);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(GAME_PLAY_W, GAME_PLAY_H);
    view->setSceneRect(0, 0, GAME_PLAY_W, GAME_PLAY_H);
    */

}
