#include <iostream>
using namespace std;

int main(){
  int n, m;
  // cin --> input

  cin >> n;
  cin >> m;
  cout << "Value of n is: " << n << " and " << m << endl;

  if (n > 0){
    cout << "Positive" << endl;
  } else if(n == 0){
    cout << "Zero" << endl;
  } else {
    cout << "Negative" << endl;
  }
  
  int num = 4;
  int i = 0;
  
  while(i < num){
    cout << i << " ";
    i++;
  }
  
}