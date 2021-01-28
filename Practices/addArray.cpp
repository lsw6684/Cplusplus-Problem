#include <iostream>
using namespace std;

int addArray(int a[], int size); // �Լ��� ���� ����
void makeDouble(int a[], int size); // �Լ��� ���� ����
void printArray(int a[], int size); // �Լ��� ���� ����

int main() {
	int n[] = { 1,2,3,4,5 }; // int n[5]�� �ص� ��
	int sum = addArray(n, 5); // �迭 n�� ���� 5�� �Ű� ������ ����
	cout << "�迭 n�� ���� " << sum << "�Դϴ�\n";

	makeDouble(n, 5); // �迭 n�� ���� 5�� �Ű� ������ ����
	printArray(n, 5); // �迭 n�� ���� 5�� �Ű� ������ ����
}

int addArray(int a[], int size) { // �迭�� ������ ���޹޾� ���� �����ϴ� �Լ�
	int i, sum=0;
	for(i=0; i<size; i++) 
		sum += a[i];
	return sum;
}

void makeDouble(int a[], int size) { // �迭�� ���� �� ��� ������Ű�� �Լ�
	int i;
	for(i=0; i<size; i++) 
		a[i] *= 2; // ������ ���� 2�� ����
}

void printArray(int a[], int size) { // �迭�� ����ϴ� �Լ�
	int i;
	for(i=0; i<size; i++)
		cout << a[i] << ' '; // ���� ���
	cout << "\n";
}
