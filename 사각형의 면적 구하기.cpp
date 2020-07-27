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
	
	cout<<"사각형의 가로, 세로를 차례로 입력 : ";
	cin>>rect.width>>rect.height;
	cout<<"사각형의 면적" <<rect.getArea()<<endl;	
} 
