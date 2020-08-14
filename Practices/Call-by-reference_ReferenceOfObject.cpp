#include <iostream>
#include <stdlib.h>

using namespace std;

class Circle{
	private:
		int radius;
	public:
		Circle();
		Circle(int r);
		~Circle();
		
		double getArea() { return 3.14*radius*radius; }
		int getRadius() { return radius; }
		void setRadius(int radius) { this -> radius = radius; }
};

Circle::Circle(){
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int radius){
	this -> radius = radius;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle(){
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

void increase(Circle &c) {	//c�� ���� �Ű� ���� 
	int r = c.getRadius();
	c.setRadius(r+1);	//c�� �����ϴ� ���� ��ü�� ������ 1 ���� 
}

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl; 
	cout << "If you wanna see the Destroyer, press any key\n";
	
	system("pause");
	

}
