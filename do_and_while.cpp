#include <iostream>

int main(int argc, char const *argv[]) {
  int arr[100];
  int i = 100;

  std::cout << arr << '\n';

  while(i > 0) {
    arr[i] = i * i;
    i--;
  }

  std::cout << arr << '\n';
  return 0;
}
