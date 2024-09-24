#include <iostream>
using namespace std;

int reverseArray(int arr[], int size){
  int left = 0;
  int right = size - 1;

  while (left < right){
    swap(arr[left], arr[right]);
    left++;
    right--;
  }
}


int printArray(int arr[], int size){
  for (int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
}

int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  reverseArray(arr, 5);
  printArray(arr, 5);
}