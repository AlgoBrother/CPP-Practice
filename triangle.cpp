
#include <iostream>
using namespace std;
int main(){
	int n =10;
	cout<< "Enter Range: ";
	//cin<< n <<endl;
	for (int i = 0;i<n;i++){
		for(int j = 0;j<i;++j){
			cout<<"* ";
		}
		cout<<endl;
	}

}

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter Range: ";
//     cin >> n;
//     for (int i = 1; i <= n; ++i) { // Change loop to start from 1 to print correctly
//         for (int j = 1; j <= i; ++j) {
//             cout << "* ";
//         }
//         cout << endl; // Move to the next line after each row
//     }
//     return 0;
// }
