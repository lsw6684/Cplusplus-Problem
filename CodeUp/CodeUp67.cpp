#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a > 0)
	{
		cout << "plus"<<endl;
		if (a % 2 == 0)
			cout << "even";
		else
			cout << "odd";
	}
	else
	{
		cout << "minus" << endl;
		if (-a % 2 == 1)
			cout << "odd";
		else
			cout << "even";
	}
	system("pause");
	return 0;
}