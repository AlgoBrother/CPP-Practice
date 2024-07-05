#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int num;
  cout << "Enter Number for binary conversion" << endl;
  cin >> num;
  int i = 0;
  int ans = 0;

  bool isNegative = (num < 0); 
  if (isNegative){ // if number is negative the if statement will be activated
    num = ~(-num) + 1; // -num converts the negative number as positive and ~ NOT bitwise operator converts the new number into binary
  }
  
  while (num != 0){
    int bit = num & 1; // lets say our input is 10. the binary will be 1010. 
    // If you know AND operator then know output is only one when both digits are one so whenever num is 1 (for reference in loop it will take number one by one in binary) then bit will be one
    ans += (bit * pow(10, i)); 
    // (0 x 10^0) = 0
    // loop repeats
    // (1 x 10^1) + 0 [previous answer] = 10
    // loop repeats
    // (0 x 10^2) + 10 = 10
    // loop repeats
    // (1 x 10^3) + 10 = 1010

    num >>= 1; // num binary will be shifted right 

    i++; // i will be incremented whenever loop repeats
  }

  cout << "Answer is: " << ans << endl;
  return 0;
}
