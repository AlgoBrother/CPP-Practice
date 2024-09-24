#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;

  switch (num)
  {
  case 1:
    cout << "big" << endl; /* code */
    break;
  
  case 2:
    cout << "small" << endl;
    break;

  default:
    cout << "normal" << endl;
    break;
  }
}