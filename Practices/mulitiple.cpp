#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "�� ���� �Է�>>";
	cin >> a >> b;

	if(b%a == 0) // b�� a�� ���
		cout << "Yes" << "\n";
	else
		cout << "No" << "\n";
}