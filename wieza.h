#ifndef WIEZA_H
#define WIEZA_H

#include "figura.h"

class Wieza : public Figura
{
public:
    Wieza(QWidget *parent, int x, int y, int player, int id);
};

#endif // WIEZA_H
