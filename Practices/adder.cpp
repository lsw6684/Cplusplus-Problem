#include <iostream>
using namespace std;

// �� ���� ������ �޾� ���� ���ϰ� ����� �����ϴ� �Լ� adder
int adder(int a, int b) { 
	int sum;
	sum = a + b;
	return sum;
}

int main() {
	int n = adder(24567, 98374); // �Լ� adder() ȣ��
	cout << "24567�� 98374�� ���� " << n << "�Դϴ�\n";

	int a, b;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	n = adder(a, b);  // �Լ� adder() ȣ��
	cout << a << "�� " << b << "�� ���� " << n << "�Դϴ�\n";
}