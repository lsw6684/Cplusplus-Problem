#include <iostream>
using namespace std;

//두 개의 정수를 받아 큰 값을 리턴하는 함수
int bigger(int a, int b){
	if(a>b) return a;
	else return b;
} 

//매개 변수 n이 3으로 나누어지면 true, 아니면 false를 리턴하는 함수 
bool divideBy3(int n){
	if(n%3 == 0)
		return true;
	else return false;
} 

int main() {
	int a, b, n;
	cout << "두 개의 점수 입력 : ";
	cin >> a >> b;
	
	n = bigger(a, b);
	cout << a << "와 " << b << "중 큰 값은 " << n << "입니다.\n";
	
	if(divideBy3(n))
	cout << n << "은 " << "3의 배수입니다.\n";
}
