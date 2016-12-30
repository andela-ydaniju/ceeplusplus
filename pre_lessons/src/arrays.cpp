#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main() {
  int arr[10];

  for (int i = 0; i < 10; i++) {
    arr[i] = i + 100;
  }

  cout << "Element" << setw(13) <<  "Value" << endl;

  for (int j = 0; j < 10; j++) {
    cout << setw(7) << j <<  setw(13) << arr[j] << endl;
  }

  return 0;
}
