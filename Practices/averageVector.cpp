#include <iostream>
#include <vector>
using namespace std;

int main() {
	int nUser(0); // ������ �Է��ϴ� ������ ���� ����
	vector<int> v;
	vector<int>::iterator it;
	int sum; // ����� ���� ���ؼ��� vector�� �ִ� ������ ���� ���ϴ� �� �켱�̴�.
	double avg; // ����� ��Ÿ���� ����
	while (true) {
		sum = 0; // �� ���� �� ���� ���� �����س��� �ϹǷ� �ʱ�ȭ ���๮�� �־��ش�.
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
		cin >> nUser;
		if (nUser == 0) // ������ �Է��� ���ڰ� 0�̾��� ���, �ݺ����� �������� �� ���α׷��� �����Ѵ�.
			break;
		v.push_back(nUser);
		for (it = v.begin(); it != v.end(); it++) {
			cout << *it << ' ';
			sum += *it; // vector�� ���������� vector�� ������ iterator ���� it�� ��ȸ������ ���Ұ����� ����Ų��.
						// �� ����Ű�� ������ ���������������� sum�� �ջ����ش�.
		}
		cout << endl;
		avg = (double)sum / v.size();
		cout << "��� = " << avg << endl;
	}
	return 0;
}