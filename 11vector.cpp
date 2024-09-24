#include <iostream>
#include <vector>

int main(){
	std::vector<int> test;
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.push_back(1);
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.push_back(2);
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.push_back(3);
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.push_back(4);
	std::cout << "Capacity: " << test.capacity() << std::endl; 
	test.push_back(5);
	std::cout << "Capacity: " << test.capacity() << std::endl; // It tells how many elements the vector can fit, if exceeded it will multiply the capacity by 2.
	std::cout << "Size: " << test.size() << std::endl; // It tells how many elements are present in the vector

	for(const int& i : test){
		std::cout << i << " ";
	}

	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.pop_back();
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.pop_back();
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.pop_back();
	std::cout << "Capacity: " << test.capacity() << std::endl;
	test.clear();
	std::cout << "Capacity: " << test.capacity() << std::endl;

	test.push_back(1);
	test.push_back(2);
	test.push_back(3);
	std::cout << test.front() << " ";
	std::cout << test.back() << std::endl;
}