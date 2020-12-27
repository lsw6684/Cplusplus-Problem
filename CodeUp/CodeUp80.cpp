#include <iostream>
using namespace std;
int main() {
	
	int a, sum=0, i=1;
	cin >> a;
	while(true)
	{
		sum += i;
		if (sum >=a) {
			cout << i;
			break;
		}
		i++;

	}
	
	system("pause");
	return 0;
}