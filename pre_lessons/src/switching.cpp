#include <iostream>
#include <string>
using namespace std;

void decide();

int main() {
  decide();

  return 0;
}

void decide() {
  char food;
  cout << "What do you want?" << endl;
  cin >> food;

  switch (food) {
    case 'r':
      cout << "We've got " << "rice" << endl;
      break;

    case 'b':
      cout << "We've got black " << "beans" << endl;
      break;

    default:
      cout << "Gerrarahia" << endl;
      break;
  }
}
