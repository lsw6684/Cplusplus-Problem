#include <iostream>
using namespace std;

int main(){
	int n = 10, m;
	char c = 'A';
	double d;
	
	int *p = &n;	//p�� n�� �ּҰ��� ���� 
	char *q = &c;	//q�� c�� �ּҰ��� ���� 
	double *r = &d;	//r�� d�� �ּҰ��� ���� 
	
	//�� �ּҰ��� ���� ���� 
	*p = 25;
	*q = 'A';
	*r = 3.14;
	m = *p + 10;
	
	cout << n << ' ' << *p <<endl;
	cout << c << ' ' << *q <<endl;
	cout << d << ' ' << *r <<endl;
	cout << m <<endl;
 
	
}
