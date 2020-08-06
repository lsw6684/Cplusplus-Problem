#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a("I love");
	string b("I love");
	string c("I love");
	a.insert(2, "really ");	//인덱스 2위치 
	b.insert(3, "really ");	//인덱스 3위치 
	c.insert(4, "really ");	//인덱스 4위치 
	
	cout << a << endl << b << endl << c ;
	
	system("pause");
}
