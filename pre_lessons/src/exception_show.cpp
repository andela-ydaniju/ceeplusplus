// exception example
#include <iostream>       // std::cerr
#include <exception>      // std::exception
#include <sstream>
#include <string>

using namespace std;

float divide(float a, float b) {
  if (b == 0) {
    stringstream ss;
    ss << "Eewo, you cannot divide " << a << " by " << b << endl;
    throw ss.str();
  }
  return a / b;
}

int main () {
  try
  {
    cout << divide(4, 5) << endl;
    cout << divide(4, 0) << endl;
  }
  catch (const string msg)
  {
    cerr << "exception caught: " << msg << '\n';
  }
  return 0;
}

