#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���." << endl;
	string s;
	cout << "���>>";
	cin >> s;

	string t;
	cout << "�ƶ�>>";
	cin >> t;

	// ��ǰ� �̱�� ���
	if (s == "����" && t == "��")
		cout << "��ǰ� �̰���ϴ�." << endl;
	else if (s == "����" && t == "����")
		cout << "��ǰ� �̰���ϴ�." << endl;
	else if (s == "��" && t == "����")
		cout << "��ǰ� �̰���ϴ�." << endl;

	// �ƶ��� �̱�� ���
	else if (t == "����" && s == "��")
		cout << "�ƶ��� �̰���ϴ�." << endl;
	else if (t == "����" && s == "����")
		cout << "�ƶ��� �̰���ϴ�." << endl;
	else if (t == "��" && s == "����")
		cout << "�ƶ��� �̰���ϴ�." << endl;
	return 0;
}