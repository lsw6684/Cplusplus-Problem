#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string e = "I love love C++";
	int index = e.find("love");	//e에서 love검색. 인덱스 2 리턴
	int index2, index3, index4;
	index = e.find("love", index + 1); //e의 인덱스 3부터 love 검색. 인덱스 7 리턴 
	index2 = e.find("C#");	//e에서 "C#"을 발견할 수 없음. -1 리턴
	index3 = e.find('v', 7); //e의 인덱스 7부터 v 검색. 인덱스 9 리턴
	index4 = e.find("I love love C++");	//일치. 0 리턴 
	cout << index << endl << index2 << endl << index3 << endl << index4	<< endl; 

	system("pause");
}
