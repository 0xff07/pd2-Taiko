#include "bullet.h"
#include "parameters.h"



Bullet::Bullet()
{
    srand(time(NULL));
    BulletColor = rand() % 4;
    //qDebug() << "bullet color is:" << BulletColor<<endl;

    /* for decide the color */

      if(BulletColor == 1){
          setRect(DRUM_START_X-DRUM_SIZE_X, DRUM_START_Y-25, DRUM_SIZE_X, DRUM_SIZE_Y);
      }
      else if(BulletColor == 2){
          setRect(DRUM_START_X-DRUM_SIZE_X, DRUM_START_Y, DRUM_SIZE_X/2, DRUM_SIZE_Y/2);
      }

    QTimer *timer = new QTimer;
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(1);
}

int Bullet::bulletColorIs()
{
    return BulletColor;
}

void Bullet::initRecord()
{
    fail = 0;
    succeed = 0;
}




void Bullet::move()
{
  setPos(x()-5, y());
  if(pos().x() < -1*GAME_PLAY_W){
      delete this;
  }
}

void Bullet::judge(int KeyNo)
{


    if(KeyNo && x() < -600 && x() > -680){
        if(BulletColor == KeyNo){
            qDebug() << "Succeed";
            setPos(-1000, DRUM_START_Y);
            succeed++;
        }
        else{
            qDebug() <<"Wrong Key";
            fail++;
        }
    }
    else{
      qDebug() << "Wrong Time";
      fail++;
    }

}

int Bullet::fail(0);
int Bullet::succeed(0);
