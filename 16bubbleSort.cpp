#include <iostream>

void swap(int& num1, int& num2){
 int temp = num1;
 num1 = num2;
 num2 = temp;
}

void bubbleSort(int arr[], int size){
 for(int i = 0; i < size; i++){
  bool swapped = false;
  for(int j = 0; j < size - i - 1; j++){
   if(arr[j] > arr[j + 1]){
    swap(arr[j], arr[j + 1]);
    swapped = true;
   }
  }
  if(!swapped){
   break;
  }
 }
}

int main(){
 int size = 6;
 int arr[] = {1, 3, 5, 2, 4};

 bubbleSort(arr, size);
 for(int values : arr){
  std::cout << values << " ";
 }
 std::cout << std::endl;
}