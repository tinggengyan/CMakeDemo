#include "enity/Man.h"
#include <iostream>

using namespace std;

int main() {

  Man man(18);
  std::cout << man.getAge();
  man.toPrint();

  return 1;
}