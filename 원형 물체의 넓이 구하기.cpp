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
	cout<<"���̰� �ñ��� ���� ��ü�� �������� �Է��ϼ���\n"; 
	cin>>object.radius;
	double area = object.getArea();
	cout<<"���� : " << area <<endl;
	
}
