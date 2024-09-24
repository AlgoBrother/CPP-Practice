#include <iostream>
#include <vector>
	int main(){	
		int num;
		float price[3];
		for (int i = 0; i < 3; i++){
			std::cout << "Enter price for smartphone "<< i+1 << std::endl;
			std::cin >> price[i];
		}

		float minPrice = price[0];
		for (int j = 0; j < 3; j++){
			if (minPrice > price[j]){
				minPrice = price[j];
			}
		}

		std::cout << "Best price for you is " << minPrice << std::endl;
		
	}