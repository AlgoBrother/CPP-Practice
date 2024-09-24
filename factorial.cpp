#include <iostream>
int factorial(int n){
 int result = 1;
 for(int i = 1; i <= n; i++){
  result *= n;
 }

 return result;
}

int nCr(int n, int r){
 int N = factorial(n);
 int R = factorial(r);
 int brack = factorial(n - r);

 int result = N / (R * brack);
 return result;
}

int main(){
 int n, r;
 std::cout << "Enter N: ";
 std::cin >> n;
 std::cout << "Enter R: ";
 std::cin >> r;

 int answer = nCr(n, r);
 std::cout << "The answer is " << answer << std::endl;
}