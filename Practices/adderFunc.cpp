#include <iostream>
using namespace std;

//두 개의 정수를 받아 합을 구하고 결과를 리턴하는 함수 adder
int adder(int a, int b){
	int sum;
	sum = a + b;
	return sum;
} 

int main() {
	int a, b, n;
	cout << "합칠 수를 2개 입력하세요"<<endl;
	cin>>a>>b;
	n = adder(a, b);
	cout << a << "와" << b <<"의 합은 : "<<n; 
}
