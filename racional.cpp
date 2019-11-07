#include  "racional.h"

Racional::Racional(int a,int b): Complexo(a, b){};

Racional::~Racional(){};

Racional Racional :: operator+(Racional n){
  Racional R (getValue()+n.getValue(), getValue2() + n.getValue2());
  return R;
};

