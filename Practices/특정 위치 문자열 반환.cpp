#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string f("I love C++");
	char ch1 = f.at(7);
	char ch2 = f[7];
	//�� �� ���� ǥ��. Ư�� �ε��� ��ġ ���� ��������.
	cout << ch1 << endl << ch2; 
	system("pause");
}
