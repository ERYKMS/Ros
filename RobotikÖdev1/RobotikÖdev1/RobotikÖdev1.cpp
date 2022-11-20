#include<iostream>
int main() {
	int triangle[3][2] ={{ 0,0 },	
						{ 7,0 }, 
						{ 0,5 } };
	int xMax{};
	int yMax{};
	for(int i=0;i<3;++i)
	if (triangle[i][0] > xMax) {
		xMax = triangle[i][0];
	}
	for (int i = 0; i < 3; ++i) {
		if (triangle[i][1] > yMax)
			yMax = triangle[i][1];
	}
	int input[2]{};
	for (int i = 0; i < 2; ++i) {
		if (i == 0) { std::cout << "pleas enter X and Y "; } {
			std::cin >> input[i];
		}
	}
	if (input[0]>xMax || input[1]>yMax) {
		std::cout << "false";

	}
	else
	{
		std::cout << "true";
	}

}