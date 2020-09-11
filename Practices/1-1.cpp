#include <iostream>
#include <stdlib.h>


void main() {
	int sum = 1;
	for (int i = 1; i <= 10; i++)
		sum *= i;
	std::cout << "Fatorial of 10 : "
		<<sum<<std::endl;
	system("pause");
}