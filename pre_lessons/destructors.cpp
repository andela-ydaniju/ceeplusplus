#include <iostream>

using namespace std;

class Vect {
public:
  Vect(int n);
  Vect(const Vect& a);
  Vect();
  ~Vect();
  Vect& operator=(const Vect& a);

private:
  int* data;
  int size;
};

Vect::Vect(int n) {
  size = n;
  data = new int[n];
}

Vect::Vect(const Vect& a) {
  size = a.size;
  data = new int[size];

  for(int i = 0; i < size; i++) {
    data[i] = a.data[i];
  }
}

Vect::Vect() {
  size = 10;
  data = new int[10];
}

Vect::~Vect() {
  delete []data;
}

Vect& Vect::operator=(const Vect& a) { // assignment operator from a
  if (this != &a) { // avoid self-assignment
    delete [ ] data; // delete old array
    size = a.size; // set new size
    data = new int[size]; // allocate new array
    for (int i=0; i < size; i++) { // copy the vector contents
      data[i] = a.data[i];
    }
  }
  return *this;
}

int main(int argc, char const *argv[]) {
  Vect* a = new Vect(100);
  Vect* b = a;
  Vect* c;
  c = a;

  cout << a << " | " << b << " | " << c << endl;
  return 0;
}
