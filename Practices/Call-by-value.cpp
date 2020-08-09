#include <iostream>
#include <stdlib.h>

using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	double getArea() {return 3.14*radius*radius;}
	int getRadius()	{return radius;}
	void setRadius(int radius){this -> radius = radius;}
};

Circle::Circle()
{
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int radius)
{
	this -> radius = radius;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle()
{
	cout << "소멸자 실행 radius = " << radius << endl;
}

void increase(Circle c)	//waffle의 내용이 그대로 c에 복사. 
{						//객체 c의 생성자가 실행되지 않음. 
	int r = c.getRadius();
	c.setRadius(r+1);
}						//객체 c의 소멸자 실행 

int main()
{
	Circle waffle(30);
	increase(waffle);
	cout << waffle.getRadius() << endl;
	system("pause");
}
