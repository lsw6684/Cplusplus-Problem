#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string a("I study C++");	 
	int length = a.length();	//������ ���� 
	int size = a.size();		//���� 
	int capacity = a.capacity();//���� �뷮. ���� �� ����
	cout << length << endl << size << endl << capacity; 
	
	
	
	system("pause");
}
