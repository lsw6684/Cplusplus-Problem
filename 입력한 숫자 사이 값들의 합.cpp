#include <iostream>
using namespace std;

int main(){
	int i, a, b, swap, sum = 0;
	cout << "두 개의 정수 입력 : ";
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
	cout<<a<<"에서 "<<b<<"까지의 합은 : "<<sum <<"입니다.";
}
