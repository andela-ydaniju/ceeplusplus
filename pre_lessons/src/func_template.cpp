#include <iostream>
#include <string>

using namespace std;

template <typename A>
inline string Equal(A const& a, A const& b) {
  return a == b ? "Yes" : "No";
}

int main (){

  cout << Equal<int>(6, 5) << endl;
  cout << Equal<int>(5, 5) << endl;
  cout << Equal<string>("hello", "hello") << endl;
  cout << Equal<string>("hellos", "hello") << endl;
  
  return 0;
}
