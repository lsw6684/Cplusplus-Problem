#include <iostream>
using namespace std;

class Base
{
private:
	int baseNum;
public:
	Base() : baseNum(20)
	{
		cout << "Base()" << endl;
	}
	Base(int n) : baseNum(n)
	{
		cout << "SoBase(int n)" << endl;
	}
	void ShowBaseData()
	{
		cout << baseNum << endl;
	}
};

class Derived : public Base
{
private:
	int derivNum;
public:
	Derived() : derivNum(30)
	{
		cout << "Derived()" << endl;
	}
	Derived(int n) : derivNum(n)
	{
		cout << "Derived(int n)" << endl;
	}
	Derived(int n1, int n2) : Base(n1), derivNum(n2)
	{
		cout << "Derived(int n1, int n2)" << endl;
	}
	void ShowDerivData()
	{
		ShowBaseData();
		cout << derivNum << endl;
	}
};

int main()
{
	cout << "case1..." << endl;
	Derived dr1;
	dr1.ShowDerivData();
	cout << "-----" << endl;
	Derived dr2;
	dr2.ShowDerivData();
	cout << "----" << endl;
	cout << "case3..." << endl;
	Derived dr3(23, 24);
	dr3.ShowDerivData();
	system("pause");
	return 0;
}