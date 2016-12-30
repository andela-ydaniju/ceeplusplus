#include <string>
#include <iostream>
using namespace std;

class Game {
  public:
    Game(string name);
    Game(void);
    string getName(void);
    friend ostream &operator<< (ostream& out, const Game& gam);
    friend istream &operator>> (istream& in, Game& gam);

  private:
    int score;
    string playerName;

};

Game::Game(string name) {
  playerName = name;
  score = 0;
}

Game::Game(void) {
  score = 0;
}


ostream &operator<< (ostream& out, const Game& gam) {
  out << gam.playerName << " has " << gam.score << " points" << endl;
  return out;
}

istream &operator>> (istream& in, Game& gam) {
  in >> gam.playerName;
  return in;
}

string Game::getName(void) {
  return playerName;
}

int main() {
  Game thrones = Game("Yusuf");
  Game snakes;

  cin >> snakes;
  cout << "Game data 1: " << thrones << endl;
  cout << "Game data 2: " << snakes << endl;

  return 0;
}
