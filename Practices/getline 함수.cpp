#include <iostream>
using namespace std;

int main() {
	char address[100];
	
	cout<<"주소를 입력하세요 : ";
	cin.getline(address, 100, '\n');
	
	cout<<"입력한 주소는 "<<address<<"입니다.\n";
}
