// 접근 제어
// public		: 외부접근o 자식클래스o
// protected	: 외부접근x 자식클래스o
// private		: 외부접근x 자식클래스x

#include <iostream>

using namespace std;

class Base {
public:
	int bPublic;

protected:
	int bProtected;

private:
	int bPrivate;
};

class Derived : public Base {
public:
	int dPublic;

	void DFunc() {
		bPublic = 1;
		bProtected = 2;
		// Error bPrivate = 3;
		dPublic = 4;
		dPrivate = 5;
	}
private:
	int dPrivate;

};

int main() {
	Base b;
	Derived d;

	b.bPublic = 3;
	//Error	b.bProtected = 2;

}