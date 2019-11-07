#include <stdlib.h>
#include <iostream>
#include "racional.h"

using namespace std;


int main(){
  Racional x(3,2);
  Racional y(2,2);
  Racional A  = x+y;
  cout << endl;
  cout << "a = " << x.operator+(y).getValue() <<"/" << x.operator+(y).getValue2()<< endl;
  return 0;
}