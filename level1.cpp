#include "level1.h"
#include "button.h"

Level1::Level1(QWidget *parent) : QMainWindow(parent)
{
    setFixedSize(800,600);

    Button* home = new Button(":/back1/image/icons8-home-50.png");
    home->setParent(this);
    home->move(40,40);
    connect(home,&Button::clicked,this,[=]{
        emit chooseBack();
    });
    loadTowerPositions();
}

void Level1::loadTowerPositions()
{
    QPoint pos[] =
    {
        QPoint(160, 300),
        QPoint(320, 300),
        QPoint(480, 300),
        QPoint(640, 300),

        QPoint(160, 150),
        QPoint(320, 150),
        QPoint(480, 150),
        QPoint(640, 150),

        QPoint(160, 450),
        QPoint(320, 450),
        QPoint(480, 450),
        QPoint(640, 450)
    };
    int len	= sizeof(pos) / sizeof(pos[0]);

    for (int i = 0; i < len; ++i)
        m_towerPositionsList.push_back(pos[i]);
}

void Level1::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, this->width(),this->height(),QPixmap(":/level1/image/level1.png"));
    for(int i=0;i<m_towerPositionsList.count();i++){
        m_towerPositionsList[i].draw(&painter);
    }
}
