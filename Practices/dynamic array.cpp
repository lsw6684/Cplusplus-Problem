#include <iostream>

int main()
{
	std::cout << "Enter list size : ";
	int n;
	std::cin >> n;
	int* A = new int[n];
	if (n <= 0) {
		std::cout << "bad size" << std::endl;
		return 0;
	}
	initialize(A, n, 0);	//initialize the array A with value 0
	print(A, n);
	A = addElement(A, n, 5);//add an element of value 5 at the end of A
	print(A, n);
	A = deleteFirst(A, n);	//delete the first element from A
	print(A, n);
	delete[] A;
	return 0;
}