#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	cin >> a;
	a -= 1;
	while (true)
	{

		cout << a << endl;
		if (a == 0)
			break;
		a--;
	}


	system("pause");
	return 0;
}