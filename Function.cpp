#include <iostream>
using namespace std;

//�� ���� ������ �޾� ū ���� �����ϴ� �Լ�
int bigger(int a, int b){
	if(a>b) return a;
	else return b;
} 

//�Ű� ���� n�� 3���� ���������� true, �ƴϸ� false�� �����ϴ� �Լ� 
bool divideBy3(int n){
	if(n%3 == 0)
		return true;
	else return false;
} 

int main() {
	int a, b, n;
	cout << "�� ���� ���� �Է� : ";
	cin >> a >> b;
	
	n = bigger(a, b);
	cout << a << "�� " << b << "�� ū ���� " << n << "�Դϴ�.\n";
	
	if(divideBy3(n))
	cout << n << "�� " << "3�� ����Դϴ�.\n";
}
