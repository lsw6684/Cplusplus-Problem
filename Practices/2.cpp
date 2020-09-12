#include <iostream>
int ip1, ip2;
void main() {
	std::cout << "Input an age of A: ";
	std::cin >> ip1;
	std::cout << "Input an age of B: ";
	std::cin >> ip2;

	if (ip1 > ip2)
		std::cout << "A is order than B" << std::endl;
	else if (ip1 < ip2)
		std::cout << "B is order than A" << std::endl;
	else
		std::cout << "A and B are the sme age" << std::endl;
	system("pause");
}