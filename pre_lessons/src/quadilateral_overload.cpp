#include <iostream>
using namespace std;

class Quadilateral {
  public:
    Quadilateral(void);
    Quadilateral(float len, float bre);
    float getArea(void);
    Quadilateral operator+(const Quadilateral& q);

  private:
    float length;
    float breadth;
    float area;
};

Quadilateral::Quadilateral(float len, float bre) {
  length = len;
  breadth = bre;
  area = length * breadth;
}

Quadilateral::Quadilateral() {
  length = 0.0;
  breadth = 0.0;
  area = length * breadth;
}

float Quadilateral::getArea(void) {
  return area;
}

Quadilateral Quadilateral::operator+(const Quadilateral& q) {
  Quadilateral quad = Quadilateral();

  quad.length = this->length + q.length;
  quad.breadth = this->breadth + q.breadth;
  quad.area = this->area + q.area;
  return quad;
}

int main() {
  Quadilateral rect = Quadilateral(12.0, 13.0);
  Quadilateral square = Quadilateral(4.0, 4.0);

  Quadilateral rectSquare;
  rectSquare = rect + square;

  cout << rectSquare.getArea() << endl;

  return 0;
}
