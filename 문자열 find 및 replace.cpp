#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main()
{
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&');	//���ڿ� �Է�
	cin.ignore();	// '&' �ڡڡڵڿ� ������� <Enter> Ű�� �����ϱ� ���� �ڵ� 
	
	string f, r;
	cout << endl << "find : ";
	getline(cin, f, '\n');	//�˻��� ���ڿ� �Է�
	cout << "replace : ";
	getline(cin, r, '\n');	//��ġ�� ���ڿ� �Է�
	
	int startIndex = 0;
	while(true)
	{
		int fIndex = s.find(f, startIndex);	//startIndex���� ���ڿ� f �˻�
		if(fIndex == -1)
		break;	//���ڿ� s�� ������ �����Ͽ���
		s.replace(fIndex, f.length(), r); //fIndex�� ���� f�� ���̸�ŭ ���ڿ� r�κ���
		startIndex = fIndex + r.length();
	}
	
	cout << s << endl;
	
	system("pause");
}
