#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, address, age;

	cout << "�̸���?";
	getline(cin, name);

	cout << "�ּҴ�?";
	getline(cin, address);

	cout << "���̴�?";
	getline(cin, age);

	cout << name << ", " << address << ", " << age << "��\n";
	return 0;
}