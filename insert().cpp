#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a("I love");
	string b("I love");
	string c("I love");
	a.insert(2, "really ");	//�ε��� 2��ġ 
	b.insert(3, "really ");	//�ε��� 3��ġ 
	c.insert(4, "really ");	//�ε��� 4��ġ 
	
	cout << a << endl << b << endl << c ;
	
	system("pause");
}
