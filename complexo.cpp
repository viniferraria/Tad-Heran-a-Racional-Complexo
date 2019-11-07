#include <iostream>
#include "racional.h"
using namespace std;

Complexo::Complexo(double v, double v2){
  value  = v;
  value2 = v2;
}

Complexo::~Complexo(){}
  
double Complexo::getValue(){
   return value;
  }
double Complexo::getValue2(){
    return value2;
  }

Complexo Complexo::operator+(Complexo c){
  Complexo n (value + c.getValue(), value2+c.getValue2());
  return n;
}

Complexo Complexo::operator-(Complexo c){
  Complexo n (value-c.getValue(), value2+c.getValue2());
  return n;
}

Complexo Complexo::operator*(Complexo c){
  Complexo x (value*c.getValue()-value2*c.getValue2(),value*c.getValue2()+value2*c.getValue());
  return x;
}