#include <iostream>

int fib(int num, int a = 0, int b = 1);

int main(int argc, char const *argv[]) {
  std::cout << fib(67) << std::endl;
  std::cout << fib(200) << std::endl;
  std::cout << fib(300) << std::endl;
  std::cout << fib(4) << std::endl;
  std::cout << fib(1000) << std::endl;
  std::cout << fib(450) << std::endl;

  return 0;
}

int fib(int num, int a, int b) {
  int tmp = a;

  a = b;
  b = tmp + b;

  if (b > num) {
    return a;
  }

  return fib(num, a, b);
}
