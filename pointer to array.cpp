#include <iostream>
using namespace std;

int main(){
	int n[10];
	int i;
	int *p;
	
	//�迭 n�� 3�� ����� �ʱ�ȭ
	for( i=0; i<10; i++)
		*(n+i) = i*3; 
	
	p = n;	//������ p�� �̿��Ͽ� �迭 n ���
	for( i=0; i<10; i++){
		cout << *(p+i) << ' ';	//������ p�� �̿��Ͽ� �迭 n�� ���� ���� 
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
