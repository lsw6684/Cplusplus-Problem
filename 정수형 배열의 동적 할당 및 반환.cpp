#include <iostream>
using namespace std;

int main()
{
	cout << "�Է��� ������ ������?";
	int n;
	cin >> n;	//������ ���� �Է�
	
	if(n <= 0)
	{
		cout << "�����ڴ°ž�";
	return 0;
	}

	int *p = new int[n];	//n ���� ���� �迭 ���� �Ҵ�
	if(!p)
	{
		cout << "�޸� �Ҵ� ����";
		return 0;		 
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << i+1 << "��° ���� : ";	//������Ʈ ���
		cin >> p[i];					//Ű����κ��� ���� �Է�
	}
	
	int sum = 0;
	for(int i = 0; i < n; i++)
		sum += p[i];
	cout << "�迭 ���� ��� = " << sum/n << endl;
	
	delete [] p;				//�迭 �޸� ��ȯ 
 } 
