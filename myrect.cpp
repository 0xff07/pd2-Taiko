#include "myrect.h"
#include "bullet.h"
#include <QDebug>
#include <QGraphicsScene>
#include <cstdlib>
#include <ctime>

MyRect::MyRect()
{

}

void MyRect::generateBullet()
{
  /* regular pattern generate*/
  srand(time(NULL));
  QTimer *timer = new QTimer;
  connect(timer, SIGNAL(timeout()), this, SLOT(shootBullet()));
  timer->start(1000);

}

void MyRect::shootBullet()
{
    Bullet *bullet = new Bullet();
    connect(this, SIGNAL(ThePressedKeyIs(int)), bullet, SLOT(judge(int)));
    scene() -> addItem(bullet);
}


void MyRect::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_Space){
        emit ThePressedKeyIs(1);
        //qDebug() << "space is pressed";
    }
    else if(event->key() == Qt::Key_L){
        emit ThePressedKeyIs(2);
        //qDebug() << "L is pressed";
    }
}




