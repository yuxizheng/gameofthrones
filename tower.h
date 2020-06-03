#ifndef TOWER_H
#define TOWER_H

#include<QPoint>
#include<QPixmap>
#include<QPainter>

class Tower
{
public:
    Tower();
    void draw(QPainter *painter) const;
private:
    QPoint m_pos;
    int m_attackRange;
    int m_damage;
    int m_fireRate;
    QPixmap m_sprite;
};

#endif // TOWER_H
