#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n;
	int array[23] = {};
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		array[k - 1] += 1;
	}
	for (int j = 0; j < 23; j++)
	{
		cout << array[j] << " ";
	}
	system("pause");
	return 0;
}