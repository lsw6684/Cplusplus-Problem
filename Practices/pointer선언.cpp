#include <iostream>
using namespace std;

int main(){
	int n = 10, m;
	char c = 'A';
	double d;
	
	int *p = &n;	//p는 n의 주소값을 가짐 
	char *q = &c;	//q는 c의 주소값을 가짐 
	double *r = &d;	//r은 d의 주소값을 가짐 
	
	//각 주소값에 값을 저장 
	*p = 25;
	*q = 'A';
	*r = 3.14;
	m = *p + 10;
	
	cout << n << ' ' << *p <<endl;
	cout << c << ' ' << *q <<endl;
	cout << d << ' ' << *r <<endl;
	cout << m <<endl;
 
	
}
