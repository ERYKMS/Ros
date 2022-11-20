#include<iostream>
#include<iomanip>
int main() {
	int number{};
	std::cout << "All dividin number is" << std::endl;
	std::cin >> number;
	for (int i = 1; i <= number; ++i) {
		if (number % i == 0) {
			std::cout << std::setw(10) << i;
		}
	}

}