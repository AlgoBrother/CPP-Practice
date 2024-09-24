#include <iostream>

void swap(int& num1, int& num2){
  int temp = num1;
  num1 = num2;
  num2 = temp;
}
void selectSort(int arr[], int size){
 	for(int i = 0; i < size - 1; i++){ // doing size - 1 so after each swap the search array becomes shorter and the program does not have to check the whole array again and again
		int minIndex = i;
		for(int j = i + 1; j < size; j++){
			if(arr[j] < arr[minIndex]){
			minIndex = j;
			}
		}

		if(minIndex != i){
			swap(arr[i], arr[minIndex]);
		}
	}
}
int main(){
 	int arr[] = {2, 8, 13, 9, 1};
 	int size = sizeof(arr) / sizeof(arr[0]);

 	selectSort(arr, size);

 	for(int i = 0; i < size; i++){
  std::cout << arr[i] << " ";
 	}
 	std::cout << std::endl;
}