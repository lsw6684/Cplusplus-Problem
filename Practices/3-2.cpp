#include <iostream>

void main() {
	int dia = 6;
	int i=1, j=0;
	while (i <=dia) {
		j = i;
		while (j<dia) {
			std::cout << " ";
			j++;
		}
		std::cout << "*";
		j = 2;
		while (j < i*2-1) {
			std::cout << " ";
			j++;
		}
		j = i;
		if (j > 1) {
			std::cout<<"*";
		}
			std::cout << std::endl;
		
		i++;

	}
	i = 1;
	while (i < dia) {
		j = 0;
		while (j < i) {
			std::cout << " ";
			j++;
		}
		std::cout << "*";

		j = i+1;
		while (j < dia) {
			std::cout << " ";
			j++;
		}

		j = i+2;
		while (j < dia) {
			std::cout << " ";
			j++;
		}
		j = i;
		if (j > 0&&j<5) {
			std::cout << "*";
		}

		std::cout << std::endl;
		i++;

	}
	system("pause");

}