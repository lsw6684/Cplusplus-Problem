#include <iostream>
#include <locale>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a = "hello";
	for (int i = 0; i<a.length(); i++)
	a[i] = toupper(a[i]);	//a�� HELLO�� ����
	cout << a;	//HELLO ���
	
	if(isdigit(a[0]))	cout << "����";
	else if(isalpha(a.at(0))) cout << "����";	//a[0]�� ���� 'H' 

	system("pause");
}
