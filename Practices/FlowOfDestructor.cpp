#include <iostream>
using namespace std;

class Base
{
private:
	int baseNum;
public:
	Base(int n) : baseNum(n)
	{
		cout << "Base() : " << baseNum << endl;
	}
	~Base()
	{
		cout << "~Base() : " << baseNum << endl;
	}
};

class Derived : public Base {
private:
	int derivNum;
public:
	Derived(int n) : Base(n), derivNum(n)
	{
		cout << "Derived() : " << derivNum << endl;
	}
	~Derived()
	{
		cout << "~Derived():" << derivNum << endl;
	}
};

int main()
{
	Derived drv1(15);
	Derived drv2(27);
	system("pause");
	return 0;
}