#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
  for (int i=0;i<5;i++){
    int dig = (int) (1+rand()%6);
    cout << dig << endl;
  }
  return 0;
}
