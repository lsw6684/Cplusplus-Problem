#include <iostream>
using namespace std;
int main() {
	int k, j=0;
	cout << "k => ";
	cin >> k;
	switch (k)
	{
	case 1:
		j = 2 * k - 1;
		cout << j;
		break;
	case 2:
		j = 2 * k - 1;
		cout << j;
		break;
	case 3:
		j = 3 * k + 1;
		cout << j;
		break;
	case 4:
		j = 4 * k - 1;
		cout << j;
		break;
	case 5:
		j = 3 * k + 1;
		cout << j;
		break;
	case 6:
		j = k - 2;
		cout << j;
		break;
	case 7:
		j = k - 2;
		cout << j;
		break;
	case 8:
		j = k - 2;
		cout << j;
		break;
	default :
		cout << "No case in switch, k = " << k << endl;
	}
	system("pause");
}