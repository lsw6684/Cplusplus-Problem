#include <iostream>
using namespace std;

int main()
{
	int *p;
	
	p = new int;	//int Ÿ�� 1�� �Ҵ�
	if(!p)			//�� NULL�̸� �޸� �Ҵ� ���� 
	{
		cout << "�޸� �Ҵ� ����!"<<endl;
		return 0;	
	}
	
	*p = 5;			//�Ҵ� ���� ���� ������ 5 ���
	int n = *p;
	
	cout << "*p = " << *p <<endl;
	cout << "n = " << n << endl;
	
	delete p;
}
