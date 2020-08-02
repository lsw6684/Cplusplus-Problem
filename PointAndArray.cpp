#include <iostream>
using namespace std;

class Circle{
	int radius;
public:
	Circle()
	{
		radius = 1;
	}
	Circle(int r)
	{
		radius = r;
	}
	void setRadius(int r)
	{
		radius = r;
	}
	double getArea();
}; 

double Circle::getArea()
{
	return 3.14*radius*radius;
}

int main() {
	Circle circleArray[3];	//Circle ��ü �迭 ����
	
	//�迭�� �� ���� ��ü�� ��� ����
	circleArray[0].setRadius(10);
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);
	
	for( int i=0; i < 3; i++)
		cout << "Circle" << i << "�� ������ " << circleArray[i].getArea() << endl;
		
	Circle *p;
	p = circleArray;
	for(int i=0; i<3; i++)
	{
		cout << "Circle" << i << "�� ������ " << p -> getArea() << endl;
		p++;		//�迭�� ���� ���� 
	}
}
