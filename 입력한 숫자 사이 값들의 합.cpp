#include <iostream>
using namespace std;

int main(){
	int i, a, b, swap, sum = 0;
	cout << "�� ���� ���� �Է� : ";
	cin>>a>>b;
	if(a>b)
	{
		swap = a;
		a = b;
		b = swap;
	}
	for(i=a; i<=b; i++)
	{
		sum += i;
	}
	cout<<a<<"���� "<<b<<"������ ���� : "<<sum <<"�Դϴ�.";
}
