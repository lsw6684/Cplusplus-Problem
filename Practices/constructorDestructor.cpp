#include <iostream>

class Box {
public:
	Box() : height(0), width(0), length(0) {
		std::cout << "Constructor 0" << std::endl;
	}
	Box(double h, double w, double l) : height(h), width(w), length(l) {
		std::cout << "const1 " << std::endl;
	}
	~Box() {
		std::cout << "Destructor" << std::endl;
	}


	double height, width, length;
};

void main() {
	Box box1;
	Box box2(1, 1, 1);
	system("pause");
}