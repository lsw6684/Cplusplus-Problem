#include <iostream>
using namespace std;

class Square {
private:
	int side;
public:
	//To be defined
	Square(int x = 0) : side(x)
	{}
	int getSide()
	{
		return side;
	}
	friend Square operator+(const Square& s1, const Square& s2);
	friend Square operator-(const Square& s1, const Square& s2);
	int getArea()
	{
		return side*side;
	}
};

//To be defined

Square operator+(const Square& s1, const Square& s2)
{
	Square result(s1.side + s2.side);
	return result;
}
Square operator-(const Square& s1, const Square& s2)
{
	Square result(s1.side - s2.side);
	return result;
}

void main() {
	Square s1(3);
	Square s2(4);

	Square s3 = s1 + s2;
	Square s4 = s2 - s1;
	cout << "Side of s3:" << s3.getSide() << endl;
	cout << "Area of s3:" << s3.getArea() << endl;
	cout << "Side of s4:" << s4.getSide() << endl;
	cout << "Area of s4:" << s4.getArea() << endl;
	system("pause");
}