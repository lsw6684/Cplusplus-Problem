#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a("I love C++");
	cout << a << endl;
	a.erase(0, 7); 	//ó������ 7���� ���� ����.
	cout << a << endl;
	a.clear();		//����
	cout << a << "-������ a-"; 
	system("pause");
}
