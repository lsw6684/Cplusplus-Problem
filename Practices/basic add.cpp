#include<iostream>
#include<stdlib.h>

int main()
{
	int number1, number2;
	std::cout << "Input two numbers (seperated by space)" << std::endl;
	std::cin >> number1 >> number2;
	std::cout << "The sum of " << number1 << " and "
		<< number2 << " is " << number1 + number2 << std::endl;

	system("pause");
	return 0;

}