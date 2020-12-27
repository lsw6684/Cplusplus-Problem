#include <iostream>
using namespace std;
int main() {
	long long a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i < c; i++)
	{
		a *= b;
	}
	cout << a;

	system("pause");
	return 0;
}