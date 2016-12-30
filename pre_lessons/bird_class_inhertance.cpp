#include <iostream>
#include <string>
using namespace std;

class Living {
  public:
    static const bool living = true;
};

class Animal {
  public:
    Animal(void);
    string declareMovement(void);
  
  protected:
    bool moves;
    bool hasWings;
};

Animal::Animal(void) {
  moves = true;
  hasWings = false;
}

string Animal::declareMovement(void){
  if (moves) {
    return "I move around";
  } else {
    return "I'm a disabled animal that can't move";
  }
}

class Bird: public Animal, public Living {
  public:
    Bird(void);
    string declareFlying(void);
    string declareLiving(void);
};

Bird::Bird(void) {
  moves = true;
  hasWings = true;
}

string Bird::declareFlying(void){
  if (hasWings) {
    return "can fly";
  } else {
    return "can't fly";
  }
}

string Bird::declareLiving(void){
  if (living) {
    return "I'm a living thing";
  } else {
    return "I'm dead";
  }
}

int main() {
  Bird fowl = Bird();
  
  cout << "I'm a fowl, " << fowl.declareLiving() << ", ";
  cout << fowl.declareMovement() << ", and " << fowl.declareFlying() << endl;
}
