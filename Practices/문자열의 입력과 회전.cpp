#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main()
{
	string s;
	cout << "���ڿ��� �Է��ϼ���. ��ĭ ����. �ѱ� �Ұ�." << endl;
	getline(cin, s, '\n');	//cin���� s�� \n���� �� ���� ���ڿ� ���� 
	int len = s.length();	//�Էµ� ���ڿ��� ���� 
	
	for(int i=0; i<len; i++)
	{
		string first = s.substr(0, 1);	//�ε���0~1 ����
		string sub = s.substr(1, len-1);//1���� ������(������ ���� ����) ����
		s = sub + first;		//�� ���ڿ� ����
		cout << s << endl; 
	}
	
	
	system("pause");
}
