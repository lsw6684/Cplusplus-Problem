#include <iostream>
using namespace std;

// �� ���� ������ �޾� ū ���� �����ϴ� �Լ�
int bigger(int a, int b) { 
	if(a>b) return a;
	else return b;
}

// �Ű� ������ 3���� ���������� true, �ƴϸ� false�� �����ϴ� �Լ�
bool dividedBy3(int n) {
	if(n%3 == 0) return true;
	else return false;
}

int main() {
	int a, b, n;
	cout << "�� ���� ���� �Է�>>";
	cin >> a >> b;
	n = bigger(a, b);  // (1) �Լ� bigger() ȣ��
	cout << a << "�� " << b << "�� ū ���� " << n << "�Դϴ�.\n";
	
	if(dividedBy3(n)) // (2) n�� 3�� ����̸� 
		cout << n << "�� " << "3�� ����Դϴ�.\n";
	else
		cout << n << "�� " << "3�� ����� �ƴմϴ�.\n";
}