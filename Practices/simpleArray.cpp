#include <iostream>
using namespace std;

int main() {
	int n[10]; // ���� 10��¥�� �� �޸� ����
	double d[] = {0.1, 0.2, 0.5, 3.9}; // �迭 d�� 0.1, 0.2, 0.5, 3.9�� �ʱ�ȭ

	int i;
	for(i=0; i<10; i++) n[i] = i*2; // 2�� ����� n�� ���� ä��
	for(i=0; i<10; i++) cout << n[i] << ' '; // �迭 n ���
	cout << "\n"; // �� �� ���.

	double sum = 0;  // �ʿ��� �� ������ �ƹ� ���̳� ���� ����
	for(i=0; i<4; i++) { // �迭 d�� �� ���
		sum += d[i];
	}
	cout << "�迭 d�� ���� " << sum; // �迭 d�� �� ���
}