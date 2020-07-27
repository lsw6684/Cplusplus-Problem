#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		Circle();		//기본 생성자 
		Circle(int r);	//매개변수 있는 생성자 
		double getArea();
};

Circle::Circle(){
	radius = 1;			//반지름 값 초기화
	cout << "반지름 " << radius << "원 생성" << endl; 
}

Circle::Circle(int r){
	radius = r;			//반지름 값 초기화
	cout << "반지름 " << radius << "원 생성" << endl; 
}

double Circle::getArea(){
	return 3.14*radius*radius;
}

int main() {
	Circle donut;		//매개변수 없는 생성자 호출 
	double area = donut.getArea();
	cout << "donut의 면적은 " << area <<endl;
	
	Circle pizza(30);	//매개변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza의 면적은" <<area << endl; 
}
