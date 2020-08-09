#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a("I study C++");	 
	int length = a.length();	//문자의 개수 
	int size = a.size();		//동일 
	int capacity = a.capacity();//현재 용량. 변할 수 있음
	cout << length << endl << size << endl << capacity; 
	
	
	
	system("pause");
}
