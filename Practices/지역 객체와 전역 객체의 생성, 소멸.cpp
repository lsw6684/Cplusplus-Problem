#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		Circle ();
		Circle(int r);
		~Circle();
		double getArea();
};

Circle::Circle(){
	radius = 1;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r){
	radius = r;
	cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle(){
	cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea(){
	return 3.14*radius*radius; 
}

//���� ��ü ���� - �Լ� �� 
Circle globalDonut(1000);
Circle globalPizza(2000);

//���� ��ü ���� - �Լ� �� 
void f(){
	Circle fDonut(100);
	Circle fPizza(200);
} 

int main() {
	Circle mainDonut;
	Circle mainPizza(30);
	f();
} 
