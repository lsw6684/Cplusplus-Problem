#include "Person.h"
int main()
{
	Person person[3];
	string name;
	string tel;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		person[i].set(name, tel);
	}
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < 3; i++)
		cout << person[i].getName() << ' ';
	cout << endl;
	cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
	cin >> name;
	for (int i = 0; i < 3; i++)
	{
		if (name == person[i].getName())
			cout << "��ȭ ��ȣ�� " << person[i].getTel() << endl;
	}
	return 0;
}