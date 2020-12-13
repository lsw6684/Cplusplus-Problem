#include <iostream>
using namespace std;

void Func(int one, int two = 2, int three = 3);
void Func(float fv);

void Func(int one, int two, int three)
{
	cout << "int One = " << one << endl;
	cout << "int Two = " << two << endl;
	cout << "int Three = " << three << endl;
}

void Func(float fv)
{
	cout << "float One = " << fv << endl;
}

int main()
{
	Func(10, 20, 30);
	Func(10, 20);
	Func(10);
	Func(1.5f);
	system("pause");
}