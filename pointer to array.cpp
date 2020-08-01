#include <iostream>
using namespace std;

int main(){
	int n[10];
	int i;
	int *p;
	
	//배열 n을 3의 배수로 초기화
	for( i=0; i<10; i++)
		*(n+i) = i*3; 
	
	p = n;	//포인터 p를 이용하여 배열 n 출력
	for( i=0; i<10; i++){
		cout << *(p+i) << ' ';	//포인터 p를 이용하여 배열 n의 원소 접근 
	} 
	cout << endl;
	
	for( i=0; i<10; i++){
		*p = *p + 2;
		p++;
	}
	
	for(i=0; i<10; i++)
		cout << n[i] << ' ';
	cout <<endl;
	
}
