/*
cout.width() : ��� �ڸ��� ����
cout.fill() : ��� �ڸ����� ���߰� ���ڸ��� �������� ä����
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	int y, m, d;
	cin >> y;
	cin.ignore(256,'.');
	cin >> m;
	cin.ignore(256, '.');
	cin >> d;
	cout.width(4) << cout.fill('0');
	cout << y << ".";
	cout.width(2) << cout.fill('0');
	cout << m << ".";
	cout.width(2) << cout.fill('0');
	cout << d;


	system("pause");
	return 0;
} 