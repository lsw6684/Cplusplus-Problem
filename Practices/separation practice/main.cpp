#include "EvenRandom.h"

int main()
{
	EvenRandom r;
	int nCount = 1; // ¦�� 10���� �����ϱ� ���� ī���� ����
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	while (nCount <= 10)
	{
		int n = r.ERandom(); // ��ȯ�� ���� n�� ����
		if (n != -1) // n�� ¦���� �� if�� ����
		{
			cout << n << ' ';
			nCount++;
		}
	}

	nCount = 1; // ī���� ���� �ʱ�ȭ
	cout << endl << endl << "-- 2���� " << "10 ������ ¦�� ���� ���� 10 �� --" << endl;
	while (nCount <= 10)
	{
		int n = r.EvenInRange(2, 10); // ��ȯ�� ���� n�� ����
		if (n != -1) // n�� ¦���� �� if�� ����
		{
			cout << n << ' ';
			nCount++;
		}
	}

	cout << endl;
}