#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  for (int i = 0; i<10; i++){
  int diceOne = (int) (1+rand()%6);
  int diceTwo = (int) (1+rand()%6);
  int diceTotal = diceOne + diceTwo;
  cout << diceTotal << endl;
  }
  return 0;
}
