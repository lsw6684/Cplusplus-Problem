#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main()
{
	string s;
	cout << "�������� �̷���� ���� �Է��ϼ���\nex) 1+2+3\n";
	getline(cin, s, '\n');		//���ڿ� �Է�
	int sum = 0;
	int startIndex = 0;			//���ڿ� ���� �˻��� ���� �ε���
	while(true)
	{
		int fIndex = s.find('+', startIndex);	//'+' ���� �� 	
	if(fIndex == -1)	//-1�� find()�� �߰� ���� 
	{
		string part = s.substr(startIndex);
		if(part == "") break;	//���ڰ� �ƴ� +�� ������ ���
		cout << part << endl;
		sum += stoi(part);
		break;
	}
	int count = fIndex - startIndex;	//���꽺Ʈ������ �ڸ� ���� ���� 
	string part = s.substr(startIndex, count);	//startIndex���� count ���� ���ڷ� ���꽺Ʈ�� �����
	
	cout << part << endl;
	sum +=stoi(part);		//���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
	startIndex = fIndex + 1;	//�˻��� ������ �ε��� ������Ŵ
}

	cout << "�� : " << sum << endl; 
	

	system("pause");
}
