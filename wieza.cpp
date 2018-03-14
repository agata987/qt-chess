#include "wieza.h"

Wieza::Wieza(QWidget *parent, int x, int y, int player, int id) : Figura(parent, x, y, player, id)
{
    this->nazwa = "Goniec";

    if(player == 1) this->setPixmap(QPixmap(":/biale/PNG/wieza_b.png"));
    else this->setPixmap(QPixmap(":/czarne/PNG/wieza_c.png"));
}