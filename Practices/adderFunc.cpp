#include <iostream>
using namespace std;

//�� ���� ������ �޾� ���� ���ϰ� ����� �����ϴ� �Լ� adder
int adder(int a, int b){
	int sum;
	sum = a + b;
	return sum;
} 

int main() {
	int a, b, n;
	cout << "��ĥ ���� 2�� �Է��ϼ���"<<endl;
	cin>>a>>b;
	n = adder(a, b);
	cout << a << "��" << b <<"�� ���� : "<<n; 
}
