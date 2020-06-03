#ifndef TOWERPOSITION_H
#define TOWERPOSITION_H

#include <QPoint>
#include <QPixmap>
#include <QPainter>

class TowerPosition
{
public:
    TowerPosition(QPoint pos, const QPixmap &sprite = QPixmap(":/tower/image/tower1.png"));

    void setHasTower(bool hasTower = true);
    bool hasTower() const;
    const QPoint centerPos() const;
    bool containPoint(const QPoint &pos) const;

    void draw(QPainter *painter) const;

private:
    QPoint		m_pos;
    bool		m_hasTower;
    QPixmap		m_sprite;

    static const QSize ms_fixedSize;
};

#endif // TOWERPOSITION_H
