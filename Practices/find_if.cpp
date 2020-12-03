#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool IsOdd(int i) {
	return((i % 2) == 1);
}

int main() {
	vector<int> vec;
	vector<int>::iterator it;

	for (int i = 100; i > 0; i--)
		vec.push_back(i);
	reverse(vec.begin(), vec.end());

	it = find_if(vec.begin(), vec.end(), IsOdd);
	cout << "The smallest odd value is " << *it << endl;

	system("pause");
	return 0;
}