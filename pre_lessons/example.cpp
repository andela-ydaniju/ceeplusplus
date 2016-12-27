#include <iostream>
using namespace std;

namespace myglobals {
  enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGGIE };

  struct Passenger {
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
  };
}

int main() {
  myglobals::Passenger *pass;

  pass = new myglobals::Passenger;
  pass->name = "Yusuf Omokayode Daniju";
  pass->mealPref = myglobals::VEGGIE;
  pass->isFreqFlyer = true;
  pass->freqFlyerNo = "1987";

  cout << pass->name << '\n';

  delete pass;
  return 0;
}
