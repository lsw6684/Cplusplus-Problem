#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
	return a < b;		//a가 b보다 작아야 true >> 오름차순, a>b는 내림 차순
}


int main() {
	int a[10] = { 9, 3, 5, 4, 1, 10, 8, 6, 7, 2 };
	sort(a, a + 10, compare);
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}