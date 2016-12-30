#include <iostream>
using namespace std;
enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGGIE };

class Passenger {
public:
  Passenger();

  Passenger(const string& nm, MealType mp, const string& ffn = "NONE");

  Passenger(const Passenger& pass); // copy constructor

  bool isFrequentFlyer() const;

  void makeFrequentFlyer(const string& newFrequentFlyerNo);

  string getName();

  MealType getMealPref();

private:
  string name;

  MealType mealPref;

  bool isFreqFlyer;

  string freqFlyerNo;
};

bool Passenger::isFrequentFlyer() const {
  return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFrequentFlyerNo) {
  isFreqFlyer = true;
  freqFlyerNo = newFrequentFlyerNo;
}

string Passenger::getName() {
  return name;
}

MealType Passenger::getMealPref() {
  return mealPref;
}

Passenger::Passenger() {
  name = "==NO_NAME==";
  mealPref = NO_PREF;
  isFreqFlyer = false;
  freqFlyerNo = "NONE";
}

Passenger::Passenger(const string& nm, MealType mp, const string& ffn) {
  name = nm;
  mealPref = mp;
  isFreqFlyer = (ffn !="NONE");
  freqFlyerNo = ffn;
}

Passenger::Passenger(const Passenger& pass) {
  name = pass.name;
  mealPref = pass.mealPref;
  isFreqFlyer = pass.isFreqFlyer;
  freqFlyerNo = pass.freqFlyerNo;
}

int main(int argc, char const *argv[]) {
  Passenger p1;
  cout << p1.getName() << " " << p1.getMealPref() << " "\
    << p1.isFrequentFlyer() << endl;

  Passenger p2("Yusuf", VEGGIE, "1234");
  cout << p2.getName() << " " << p2.getMealPref() << " "\
    << p2.isFrequentFlyer() << endl;

  Passenger p3("Sumayyah", REGULAR);
  cout << p3.getName() << " " << p3.getMealPref() << " "\
    << p3.isFrequentFlyer() << endl;

  Passenger* p4 = new Passenger("Kafilah", LOW_FAT, "10001");
  cout << p4->getName() << " " << p4->getMealPref() << " "\
    << p4->isFrequentFlyer() << endl;

  Passenger* p5 = p4;
  cout << p5->getName() << " " << p5->getMealPref() << " "\
    << p5->isFrequentFlyer() << endl;

  Passenger* p6(p5);
  cout << p6->getName() << " " << p6->getMealPref() << " "\
    << p6->isFrequentFlyer() << endl;

  Passenger p7(p2);
  cout << p7.getName() << " " << p7.getMealPref() << " "\
    << p7.isFrequentFlyer() << endl;

  Passenger p8 = p7;
  cout << p8.getName() << " " << p8.getMealPref() << " "\
    << p8.isFrequentFlyer() << endl;

  return 0;
}
