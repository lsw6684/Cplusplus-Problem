#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string names[5];	//string �迭 ����
	
	for(int i = 0; i< 5; i++)
	{
		cout << "�̸� : ";
		getline(cin, names[i], '\n'); // \n�� ���� �� ���� �Էµ� ���� name�� ���� 
	} 
	
	string latter = names[0];
	for (int i=1; i<5; i++)
	{
		if(latter < names[i])	//names[i]�� latter���� �ڿ� �´ٸ� 
		{
			latter = names[i]; 	//latter ���ڿ� �� 
		}
	}
	cout << "�������� ���� �ڿ� ������ ���ڿ��� " << latter << endl;
	system("pause");
}
