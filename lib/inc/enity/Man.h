#include <iostream>
#include <string>

using namespace std;

class Man {

private:
  int age;

public:
  Man(int age);

  int getAge() { return age; }

  void toPrint() { std::cout << "hello,my age is " << age; };
};