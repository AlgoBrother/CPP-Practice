#include <iostream>
#include <memory>

// int binarySearch(int arr[], int start, int end, int x){
//  int mid;
//  while(start <= end){
//   mid = start + (end - start)/2;
//   if(arr[mid] == x){
//    return mid;
//   } else if(arr[mid] > x){
//    end = mid - 1;
//   } else{
//    start = mid + 1;
//   }
//  }
//  return -1;
// }

// int main(){
//  int arr[] = {1, 2, 3, 4, 5};
//  int sel;
//  std::cin >> sel;
//  int num = binarySearch(arr, 0, 4, sel);
//  if(num == -1){
//   std::cout << "Not Found" << std::endl; 
//  }else{
//   std::cout << num << std::endl;
//  }
// }

int binarySearch(int arr[], int left, int right, int x){
  int result = -1;

  while(left <= right){
    int mid = left + (right - left) / 2;
    
    if(arr[mid] == x){
      result = mid;
      right = mid - 1;
    }else if(arr[left] == arr[mid] && arr[right] == arr[mid]){
      left++;
      right--;
    }
    
    else if(arr[left] <= arr[mid]){
      if(arr[left] <= x && x < arr[mid]){
        right = mid - 1;
      } else{
        left = mid + 1;
      }
    } else{
      if(arr[mid] <= x && x < arr[right]){
        left = mid + 1;
      } else{
        right = mid - 1;
      }
    }
  }

  return result;
}

int main(){
  int size;
  std::cin >> size;
  std::unique_ptr<int[]> arr{new int[size]};
  // int* arr = new int[size];
  for(int i = 0; i < size; i++){
    std::cin >> arr[i];
  }

  for(int i = 0; i < size; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

  int target;
  std::cin >> target;

  int num = binarySearch(arr.get(), 0, size - 1, target);
  if (num == -1){
    std::cout << "Not Found" << std::endl;
  } else{
    std::cout << num << std::endl;
  }

  // delete[] arr;
}