#include <iostream>
using namespace std;

int main()
{
	int a;
	while(true){
		cout << "���� �Է� : ";
		cin >> a;
		if ( a == 0)
			break;	//0 �ԷµǸ� while ��� 
		if (a%3 != 0)
		{
			cout << "No" << "\n";
			continue; // ���� �ݺ�. while������ �б� 
		 } 
		 cout << "Yes\n";
		 
	}
}
