#include <iostream>
using namespace std; 

class Rectangle{
	public:
	int width, height;
	double getArea();
};

double Rectangle::getArea()
{
	return width*height;
}

int main(){
	Rectangle rect;
	
	cout<<"�簢���� ����, ���θ� ���ʷ� �Է� : ";
	cin>>rect.width>>rect.height;
	cout<<"�簢���� ����" <<rect.getArea()<<endl;	
} 
