#include <iostream>

void printMean(int* grades, int n) {
	int res=0;
	for (int i = 0; i < n; i++) {
		res += grades[i];
	}
	std::cout<<"Mean: "<<res/(double)n;
	std::cout << "\n";

}
void main() {
	int n;
	std::cout << "How many students ? ";
	std::cin >> n;
	int* grades = new int[n];
	for (int i = 0; i < n; i++) {
		int mark;
		std::cout << "Input Grade for Student" << (i + 1) << "? : ";
		std::cin >> mark;
		grades[i] = mark;
	}
	printMean(grades, n);	// call a function with dynamic array
	delete[] grades;
	system("pause");
}