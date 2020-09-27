#include <iostream>
#include <cstdlib>
int main() {
	int n;
	std::cout << "Input total number of elements : ";
	std::cin >> n;

	int* input;
	input = new int[n];
	for (int i = 0; i <n; i++)
	{
		input[i] = rand()%100+1;
	}
	std::cout << "Random number: ";
	for (int i = 0; i < n; i++)
	{
		std::cout << input[i];
		if (i < n - 1) {
				std::cout << ", ";
		}
	}
	std::cout << "\n";
	delete input;
	system("pause");
}