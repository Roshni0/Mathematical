#include <iostream>    
#include <algorithm>  
#include <vector>       
using namespace std;

int main () {
  int mylist[] = {1,3,6,10,15,4,23,12,11};
  vector<int> v(mylist,mylist+9);
  sort (v.begin(), v.end());
  int x;
  cout <<"What number are you looking for? ";
  cin >> x;
  if (binary_search (v.begin(), v.end(), x))
    cout << "The number you are looking for is in the list \n"; else cout << "The number you are looking for is not in the list.\n";  
  return 0;
}
