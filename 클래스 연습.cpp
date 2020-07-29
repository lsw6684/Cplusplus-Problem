#include <iostream>
using namespace std;

class Rectangle{
	public:
	int width, height;			//너비와 높이
	Rectangle();				//생성자
	Rectangle(int w, int h);	//생성자 
	Rectangle(int length);		//생성자
	bool isSquare(); 
};

Rectangle::Rectangle(){			//Rectangle::Rectangle() : Rectangle(1){} 도 가능 
	width = height = 1;
}

Rectangle::Rectangle(int w, int h){
	width = w;
	height = h;
}

Rectangle::Rectangle(int length){//Rectangle::Rectangle(int length) : Rectangle(length) {} 도 가능 
	width = height = length;
} 

bool Rectangle::isSquare() {	//정사각형이면 true를 리턴하는 멤버 함수
	if(width == height)
	return true;
	else return false; 
}


int main()
{	//Rectangle 호출 
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);
	
	if(rect1.isSquare()) 
		cout<<"rect1은 정사각형"<<endl;
	if(rect2.isSquare()) 
		cout<<"rect2는 정사각형"<<endl;
	if(rect3.isSquare()) 
		cout<<"rect3은 정사각형"<<endl;
}


