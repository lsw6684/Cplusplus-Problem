#include <iostream>
#include <stdlib.h>
using namespace std;

//���� Ÿ���� bool�� �ϰ� ��հ��� �����ϱ� ���� ���� �Ű� ������ �߰���.
bool average(int a[], int size, int& avg)
{
	if(size <= 0)
	return false;
	int sum = 0;
	for(int i=0; i<size; i++)
	sum += a[i];
	avg = sum/size;	//���� �Ű� ���� avg�� ��հ� ���� 
	return true;	
}

int main()
{
	int x[] = {0, 1, 2, 3, 4, 5};
	int avg;
	if(average(x, 6, avg))
	cout << "��� : " << avg << endl;	//avg�� ���, average()�� true 
	else
	cout << "�Ű� ���� ����" << endl;
	
	if(average(x, -2, avg))				//avg�� �ǹ̾��� average()�� false 
	cout << "��� : " << avg << endl;
	else
	cout << "�Ű� ���� ����" << endl;
	
	system("pause");
}
