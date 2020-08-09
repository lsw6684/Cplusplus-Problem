#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a("I love C++");
	cout << a << endl;
	a.erase(0, 7); 	//처음부터 7개의 문자 삭제.
	cout << a << endl;
	a.clear();		//삭제
	cout << a << "-삭제된 a-"; 
	system("pause");
}
