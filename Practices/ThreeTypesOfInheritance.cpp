#include <iostream>
using namespace std;

class Base
{
private:
	int Private;
protected:
	int Protected;
public:
	int Public;

	Base() : Private(1), Protected(2), Public(3){}

};

class Derived : public Base
{};

int main()
{
	Derived drv;
	//cout << drv.Private << endl;
	//cout << drv.Protected << endl;
	cout << drv.Public << endl;
	system("pause");
	return 0;
}