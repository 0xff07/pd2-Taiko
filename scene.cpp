#include "scene.h"

Scene::Scene()
{

    /*gamplay is the main play scene*/
    gameplay = new QGraphicsScene();
    view = new QGraphicsView();
    HitZone = new QGraphicsRectItem();
    HitZone->setRect(220, DRUM_START_Y - 25, 100, 100);
    gameplay->addItem(HitZone);

    /*Score is a text box that shows current score*/
    Score = new QGraphicsTextItem("Score: ");
    Score->setPos(900, 0);
    gameplay->addItem(Score);

    /*rectangle is an object that constantly shoot the drum pattern*/
    rectangle = new MyRect;
    rectangle->setRect(DRUM_START_X, DRUM_START_Y, DRUM_SIZE_X, DRUM_SIZE_Y);
    rectangle -> generateBullet();
    gameplay->addItem(rectangle);

    /*set QGraphicsView to display the scene */
    view->setScene(gameplay);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(GAME_PLAY_W, GAME_PLAY_H);
    view->setSceneRect(0, 0, GAME_PLAY_W, GAME_PLAY_H);

    /* start game time*/
    CountDown();



}

void Scene::CountDown()
{
    QTimer *RemainingTime = new QTimer;
    connect(RemainingTime, &QTimer::timeout, this, &Scene::gameOver);
    RemainingTime->start(30000);

    emit RemainingGameTime(RemainingTime->remainingTime());

    CountDownTimer = new QGraphicsTextItem("Time");
    connect(this, SIGNAL(Scene::RemainingGameTime(int)), this, SIGNAL(Scene::showRemainingTime(int)));
    gameplay->addItem(CountDownTimer);
}

void Scene::gameOver()
{
    view->close();
}


void Scene::showRemainingTime(int seconds)
{
    QString temp = QString::number(seconds);
    CountDownTimer->setPlainText(temp);
}


void Scene::RemainingGameTime(int time)
{



}
