#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a = "I love C++";
	string b = a.substr(2, 4);	//2~4 ���� 
	string c = a.substr(2);		//2~.. ���� 
	cout << a << endl << b << endl << c; 
	system("pause");
}
