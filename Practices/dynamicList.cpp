#include <iostream>

void initialize(int list[], int size, int value) {
	for (int i = 0; i < size; i++)
		list[i] = value;
}
void print(int list[], int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; i++)
		std::cout << list[i] << " ";
	std::cout << "]" << std::endl;
}
int* addElement(int list[], int& size, int value) {
	int* newList = new int[size + 1];	//make new array
	if (newList == 0) {
		std::cout << "Memorry allocation error for addElement!" << std::endl;
		exit(-1);
	}
	for (int i = 0; i < size; i++)
		newList[i] = list[i];
	if (size)
		delete[] list;
	newList[size] = value;
	size++;
	return newList;
}
int* deleteFirst(int list[], int& size) {
	if (size <= 1) {
		if (size) delete list;
		size = 0;
		return NULL;
	}
	int* newList = new int[size - 1];
	if (newList == 0) {
		std::cout << "Memory allocation error for delete First!" << std::endl;
		exit(-1);
	}
	for (int i = 0; i < size - 1; i++)
		newList[i] = list[i + 1];
	delete[] list;
	size--;
	return newList;
}

int main() {
	std::cout << "Enter list size: ";
	int n;
	std::cin >> n;
	int* A = new int[n];
	if (n <= 0) {
		std::cout << "bad size" << std::endl;
		return 0;
	}
	initialize(A, n, 0);
	print(A, n);
	A = addElement(A, n, 5);
	print(A, n);
	A = deleteFirst(A, n);
	print(A, n);
	delete[] A;
	system("pause");
	return 0;

}
