#include <iostream>

int count;
extern void use_extern();

int main() {
  count = 5;
  use_extern();

  return 0;
}
