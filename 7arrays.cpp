#include <iostream>
using namespace std;

int getMax(int arr[], int n){
  int max = INT32_MIN;
  for (int i = 0; i < n; i ++){
    if (arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}

int getMin(int arr[], int n){
  int min = INT32_MAX;
  for (int i = 0; i < n; i++){
    if (arr[i] < min){
      min = arr[i];
    }
  }
  return min;
}

int main(){
  int number[] = {1,2,3,4,5,6};
  int size;
  std::cin >> size;
  int arr1[size];
  int* arr = new int[size];
  cout << number[3] << endl;
  for(int i = 0; i <= 5; i++){
    cout << number[i] << " ";
  }

  int max = getMax(number, 6);
  int min = getMin(number, 6);
  cout << endl << "Maximum: " << max << endl << "Minimum: " << min << endl;


  cout << number << endl; // will print address of the first element.
}