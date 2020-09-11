#include <iostream>
void main() {
	int sum=1;
	int i=1;

	while (i <= 10) {
		sum *= i;
		i++;
	}
	std::cout << "Factorial of 10 : "
		<< sum << std::endl;
	system("pause");
}