#include <iostream>
#include <locale>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a = "hello";
	for (int i = 0; i<a.length(); i++)
	a[i] = toupper(a[i]);	//a가 HELLO로 변경
	cout << a;	//HELLO 출력
	
	if(isdigit(a[0]))	cout << "숫자";
	else if(isalpha(a.at(0))) cout << "문자";	//a[0]은 문자 'H' 

	system("pause");
}
