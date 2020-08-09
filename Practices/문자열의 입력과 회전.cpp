#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main()
{
	string s;
	cout << "문자열을 입력하세요. 빈칸 가능. 한글 불가." << endl;
	getline(cin, s, '\n');	//cin으로 s에 \n나올 때 까지 문자열 저장 
	int len = s.length();	//입력된 문자열의 길이 
	
	for(int i=0; i<len; i++)
	{
		string first = s.substr(0, 1);	//인덱스0~1 리턴
		string sub = s.substr(1, len-1);//1에서 끝까지(마지막 공백 제외) 리턴
		s = sub + first;		//두 문자열 연결
		cout << s << endl; 
	}
	
	
	system("pause");
}
