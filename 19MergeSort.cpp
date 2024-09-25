#include <iostream>

void merge(int arr[], int left, int mid, int right){
 int n1 = mid - left + 1;
 int n2 = right - mid;

 int L[n1], R[n2];

 for(int i = 0; i < n1; i++){
  L[i] = arr[left + i]; 
 }

 for(int j = 0; j < n2; j++){
  R[j] = arr[mid + 1 + j];
 }

 int i = 0;
 int j = 0;
 int k = left;

 while(i < n1 && j < n2){
  if(L[i] <= R[j]){
   arr[k++] = L[i];
   i++;
  }else{
   arr[k++] = R[j];
   j++;
  }

 }

 while(i < n1){
  arr[k++] = L[i++];
 }

 while(j < n2){
  arr[k++] = R[j++];
 } 
}

void mergeSort(int arr[], int left, int right){
 if(left < right){
  int mid = left + (right - left) / 2;
  mergeSort(arr, left, mid);
  mergeSort(arr, mid + 1, right);

  merge(arr, left, mid, right);
 }
}

int main(){
 int arr[] = {7, 8, 2, 4, 5, 3, 2, 1};
 int size = sizeof(arr) / sizeof(arr[0]);
 mergeSort(arr, 0, size - 1);
 for(int i = 0; i < size; i++){
  std::cout << arr[i] << " ";
 }
 std::cout << std::endl;
}