#ifndef RACIONAL_H
#define RACIONAL_H
#include "complexo.h"

class Racional: public Complexo{
  public:
    Racional(int a,int b);
    ~Racional();
    Racional operator+(Racional n);
};

#endif