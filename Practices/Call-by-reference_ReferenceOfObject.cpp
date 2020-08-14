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
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius){
	this -> radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle &c) {	//c는 참조 매개 변수 
	int r = c.getRadius();
	c.setRadius(r+1);	//c가 참조하는 원본 객체의 반지름 1 증가 
}

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl; 
	cout << "If you wanna see the Destroyer, press any key\n";
	
	system("pause");
	

}
