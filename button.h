#ifndef BUTTON_H
#define BUTTON_H

#include <QWidget>
#include <QPushButton>

class Button:public QPushButton
{
    Q_OBJECT
public:
    Button(QString pix);
};

#endif // BUTTON_H
