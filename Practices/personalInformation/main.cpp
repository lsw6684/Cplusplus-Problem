#include "Person.h"
int main()
{
	Person person[3];
	string name;
	string tel;
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		person[i].set(name, tel);
	}
	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++)
		cout << person[i].getName() << ' ';
	cout << endl;
	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> name;
	for (int i = 0; i < 3; i++)
	{
		if (name == person[i].getName())
			cout << "전화 번호는 " << person[i].getTel() << endl;
	}
	return 0;
}