#include<iostream>
int factorial(int input) {
	if (input > 1) {
		return input * factorial(input - 1);
	}
	else
		return 1;

	}


int main() {
	int nunmber{};
	std::cout << "pleas enter number" << std::endl;
	std::cin >> nunmber;
	std::cout << factorial(nunmber);
	
}