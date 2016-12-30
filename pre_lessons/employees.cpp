#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Employee {
  public:
    Employee();
    Employee(const Employee& obj);
    ~Employee();
    string getName(void);
    string status(void);
    void setStatus(bool stat);
    void setName(string nom);
    void setLevel(int lev);
    friend int printNumber(Employee& emp);
    string compareLevel(Employee& emp);
    static int totalEmployees;


  private:
    string name;
    int number;
    bool isManager;
    int level;
};

Employee::Employee(void) {
  cout << "Object is being created" << endl;
  isManager = false;
  number = 1234;
  level = 1;
  ++totalEmployees;
}

// Copy constructor
Employee::Employee(const Employee& obj) {
  name = obj.name;
  number = obj.number;
  isManager = obj.isManager;
  ++totalEmployees;
}

int Employee::totalEmployees = 0;

Employee::~Employee(void) {
  cout << "Object is being destroyed" << endl;
}

// inline friend function
inline int printNumber(Employee& emp) {
  return emp.number;
}

string Employee::status(void) {
  if (isManager) {
    return "is a Manager";
  } else {
    return "is not a Manager";
  }
}

string Employee::getName(void) {
  return name;
}

void Employee::setStatus(bool stat) {
  isManager = stat;
}

void Employee::setLevel(int lev) {
  level = lev;
}

void Employee::setName(string nom) {
  name = nom;
}

string Employee::compareLevel(Employee& emp) {
  if (this->level > emp.level) {
    return this->name + " is a senior to " + emp.name;
  } else {
    return this->name + " is a junior to " + emp.name;
  }
}

int main() {
  Employee Yusuf = Employee();
  Yusuf.setName("Yusuf");

  Employee Daniju;
  Daniju = Yusuf;
  Daniju.setLevel(8);
  Daniju.setName("Daniju");

  cout << "His name is " << Yusuf.getName() << " and he " << Yusuf.status() << endl;
  cout << "His name is " << Daniju.getName() << " and he ";
  cout << Daniju.status() << " has number " << printNumber(Daniju) << endl;

  cout << Daniju.compareLevel(Yusuf) << endl;
  cout << Daniju.compareLevel(Yusuf) << endl;
  cout << "We have a total of " << Yusuf.totalEmployees << " employees" << endl;
  return 0;
}
