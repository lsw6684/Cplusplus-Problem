#include <iostream>
void main() {
	int star = 5;
	int i = 1;
	int j;
	while (i < star) {
		j = star - i;
		while (j>0) {
			std::cout << " ";
			j--;
		}
		while (j < i) {
			std::cout << "*";
			j++;
		}
		j = 0;
		while (j < i - 1) {
			std::cout << "*";
			j++;
		}
		i++;
		std::cout << std::endl;
	}

	system("pause");
}