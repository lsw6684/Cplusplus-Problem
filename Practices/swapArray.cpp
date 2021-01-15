#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size); // p, q�� �迭�� ����Ű��, size�� �迭�� ũ��
void printArray(int *p, int size); // p�� �迭�� ����Ű��, size�� �迭�� ũ��

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };

	cout << "�迭 a = ";
	printArray(a, 5);
	
	cout << "�迭 b = ";
	printArray(b, 5);

	cout << "swapArray() ����...\n";
	swapArray(a, b, 5);
	cout << "�迭 a = ";
	printArray(a, 5);
	
	cout << "�迭 b = ";
	printArray(b, 5);
}

void swapArray(int *p, int *q, int size) {
	for(int i=0; i<size; i++) {
		int tmp = *p;
		*p = *q;
		*q = tmp;
		p++; // �迭 a�� ���� ������ �ּҷ� ����
		q++; // ���� b�� ���� ������ �ּҷ� ����
	}
}

void printArray(int *p, int size) {
	for(int i=0; i<size; i++)
		cout << p[i] << ' ';
	cout << "\n";
}