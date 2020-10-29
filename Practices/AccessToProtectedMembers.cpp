#include <iostream>
using namespace std;
class Base
{
private:
	int num1;
protected:
	int num2;
public:
	int num3;
	Base()
	{
		num1 = 1;
		num2 = 2;
		num3 = 3;
	}
	void ShowData()
	{
		cout << num1 << ", " << num2 << ", " << num3 << endl;
	}
};

class Derived : public Base
{
public:
	void ShowBaseMember()
	{
		//cout << num1; is coplie error
		cout << num2 << endl;
		cout << num3 << endl;
	}
};

int main()
{
	Derived drv1;
	drv1.ShowBaseMember();
	system("pause");
	return 0;
}