#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string names[5];	//string 배열 선언
	
	for(int i = 0; i< 5; i++)
	{
		cout << "이름 : ";
		getline(cin, names[i], '\n'); // \n을 만날 때 까지 입력된 값을 name에 저장 
	} 
	
	string latter = names[0];
	for (int i=1; i<5; i++)
	{
		if(latter < names[i])	//names[i]가 latter보다 뒤에 온다면 
		{
			latter = names[i]; 	//latter 문자열 변 
		}
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은 " << latter << endl;
	system("pause");
}
