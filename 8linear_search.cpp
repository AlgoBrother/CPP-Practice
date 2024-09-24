#include <iostream>
using namespace std;

int main(){
  int arr[10] = {1, 32, 34, 43, 44, 2, 12, 2, 3, 23};

  int key;
  cout << "Enter the key number you wish to search for: ";
  cin >> key;
  
  for (int i = 0;  i < 10; i++){
    if (arr[i] == key){
      cout << key << " is present" << endl;
      break;
    } else {
      cout << "Not Present";
      break;
    }
  }
}