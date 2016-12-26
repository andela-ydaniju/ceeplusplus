#include <iostream>

int main() {
  int a[] = { 0, 1, 2, 3 };
  int i = 2;
  int j = i++; // j = 2 and now i = 3
  int k = −−i; // now i = 2 and k = 2
  std::cout << a[k++];
}
