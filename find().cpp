#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string e = "I love love C++";
	int index = e.find("love");	//e���� love�˻�. �ε��� 2 ����
	int index2, index3, index4;
	index = e.find("love", index + 1); //e�� �ε��� 3���� love �˻�. �ε��� 7 ���� 
	index2 = e.find("C#");	//e���� "C#"�� �߰��� �� ����. -1 ����
	index3 = e.find('v', 7); //e�� �ε��� 7���� v �˻�. �ε��� 9 ����
	index4 = e.find("I love love C++");	//��ġ. 0 ���� 
	cout << index << endl << index2 << endl << index3 << endl << index4	<< endl; 

	system("pause");
}
