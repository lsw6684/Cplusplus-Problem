#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string f("I love C++");
	char ch1 = f.at(7);
	char ch2 = f[7];
	//둘 다 같은 표현. 특정 인덱스 위치 문자 가져오기.
	cout << ch1 << endl << ch2; 
	system("pause");
}
