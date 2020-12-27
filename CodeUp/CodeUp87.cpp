#include <iostream>
using namespace std;
int main() {
	int a, sum = 0,i=0;
	cin >> a;
	while(true)
	{
		i++;
		sum += i;

		if (sum >= a)
		{
			cout << sum;
			break;
		}
	}	

	system("pause");
	return 0;
}