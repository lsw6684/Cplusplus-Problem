#include <iostream>
#include <string>
using namespace std;
int main() {
	int a, b, i=0;
	cin >> b;
	while (true)
	{
		if (i == b)
			break;
		cin >> a;
		cout << a << endl;
		i++;
	}


	system("pause");
	return 0;
}