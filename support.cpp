#include <iostream>

extern int count;

void use_extern(void) {
  std::cout << "Count is " << count << std::endl;
}
