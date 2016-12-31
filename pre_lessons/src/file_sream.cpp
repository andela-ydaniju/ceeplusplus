#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  ofstream textFile;
  string data;

  ifstream readerFile;

  readerFile.open("reader.txt");
  textFile.open("file.txt", ios::trunc);

  while (readerFile) {
    getline(readerFile, data);
    textFile << data << endl;
  }

  textFile.close();
  readerFile.close();

  return 0;
}
