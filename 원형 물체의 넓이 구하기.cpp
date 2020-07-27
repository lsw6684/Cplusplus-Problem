#include <iostream>
using namespace std;

class Circle{
	public:
		int radius;
		double getArea();
};

double Circle::getArea(){
	return 3.14*radius*radius;
}

int main(){
	Circle object;
	cout<<"넓이가 궁금한 원형 물체의 반지름을 입력하세요\n"; 
	cin>>object.radius;
	double area = object.getArea();
	cout<<"넓이 : " << area <<endl;
	
}
