#include <iostream>
using namespace std;

//Circle 선언부
class Circle{
	public:
		int radius;
		double getArea();
};

//Circle 구현부
double Circle::getArea(){
	return 3.14*radius*radius;
}

int main(){
	Circle object;	//객체 obeject 생성
	cout<<"넓이가 궁금한 원형 물체의 반지름을 입력하세요\n"; 
	cin>>object.radius;	//멤버 변수의 접근
	double area = object.getArea();
	cout<<"넓이 : " << area <<endl;
	
}
