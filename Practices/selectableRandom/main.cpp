#include "SelectableRandom.h"
using namespace std;

int main()
{
	SelectableRandom r;
	int nCount = 1; // ¦�� 10���� �����ϱ� ���� ī���� ����
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	while (nCount <= 10)
	{
		int n = r.EvenRandom(); // ��ȯ�� ���� n�� ����
		if (n != -1) // n�� ¦���� �� if�� ����
		{
			cout << n << ' ';
			nCount++;
		}
	}

	nCount = 1; // ī���� ���� �ʱ�ȭ
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	while (nCount <= 10)
	{
		int n = r.OddInRange(2, 9); // ��ȯ�� ���� n�� ����
		if (n != -1) // n�� ¦���� �� if�� ����
		{
			cout << n << ' ';
			nCount++;
		}
	}
	cout << endl;
}