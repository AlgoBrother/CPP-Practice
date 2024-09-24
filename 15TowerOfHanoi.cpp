#include <iostream>

void towerOfHanoi(int n, int start, int buffer, int end){
 if(n > 0){
  towerOfHanoi(n - 1, start, end, buffer);
  std::cout << "Move "<< n <<  " discs from " << start << " to " << end << std::endl;
  towerOfHanoi(n - 1, buffer, start, end);
 }
}

int main(){
 int n = 6;
 towerOfHanoi(n, 1, 2, 3);
 return 0;
}