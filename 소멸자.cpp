#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		Circle();
		Circle(int r);
		~Circle();		//~�Ҹ��� ����
		double getArea(); 
}; 
Circle::Circle(){		//Circle::Circle():Circle(1)
	radius = 1;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::Circle(int r){
	radius = r;
	cout << "������ " << radius << "�� ����" << endl;
}

Circle::~Circle() {		//�Ҹ��� ���� 
	cout << "������ " << radius << "�� �Ҹ�" << endl;
}

double Circle::getArea(){
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;			//main() �Լ��� ����Ǹ� main()�Լ��� ���ÿ� ������ pizza, donut ��ü �Ҹ� 
}
