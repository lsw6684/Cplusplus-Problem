#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std; 

int main()
{
	string s;
	cout << "덧셈으로 이루어진 식을 입력하세요\nex) 1+2+3\n";
	getline(cin, s, '\n');		//문자열 입력
	int sum = 0;
	int startIndex = 0;			//문자열 내에 검색할 시작 인덱스
	while(true)
	{
		int fIndex = s.find('+', startIndex);	//'+' 문자 검 	
	if(fIndex == -1)	//-1은 find()가 발견 못함 
	{
		string part = s.substr(startIndex);
		if(part == "") break;	//숫자가 아닌 +로 끝나는 경우
		cout << part << endl;
		sum += stoi(part);
		break;
	}
	int count = fIndex - startIndex;	//서브스트링으로 자를 문자 개수 
	string part = s.substr(startIndex, count);	//startIndex부터 count 개의 문자로 서브스트링 만들기
	
	cout << part << endl;
	sum +=stoi(part);		//문자열을 수로 변환하여 더하기
	startIndex = fIndex + 1;	//검색을 시작할 인덱스 전진시킴
}

	cout << "합 : " << sum << endl; 
	

	system("pause");
}
