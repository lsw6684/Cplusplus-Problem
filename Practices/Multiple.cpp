#include <iostream>
using namespace std;

bool isMultiple(int a, int b); // (1) �Լ��� ���� ����

int main() { // (3) �Լ� ȣ���� ������ ��ü �ڵ�
	int a, b;
	cout << "�� ���� �Է�>>";
	cin >> a >> b;

	if(isMultiple(a, b)) // isMultiple() �Լ� ȣ��
		cout << "Yes";
	else
		cout << "No";
}

bool isMultiple(int a, int b) { // (2) �Լ� �ۼ�
	if(b%a == 0) // b�� a�� ���
		return true;
	else
		return false;
}