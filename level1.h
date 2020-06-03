#ifndef LEVEL1_H
#define LEVEL1_H

#include <QMainWindow>
#include <QPainter>
#include <QList>
#include "towerposition.h"

class Level1 : public QMainWindow
{
    Q_OBJECT
public:
    explicit Level1(QWidget *parent = nullptr);
        void paintEvent(QPaintEvent *);
        void loadTowerPositions();

signals:
    void chooseBack();

private:
        QList<TowerPosition> m_towerPositionsList;
};

#endif // LEVEL1_H
