#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int a, b, n;
	int array[19][19] = {};
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		array[a-1][b-1] = 1;
	}
	for (int i = 0; i <= 18; i++)
	{
		for (int j = 0; j <= 18; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}