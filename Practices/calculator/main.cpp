#include "Calculator.h"

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char oper;
	while (true) // ���ѷ����� ����.
	{
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> x >> y >> oper; // ������ ���ϴ� �� ������ �����ڸ� �Է��ؼ� ������ ������ �����Ѵ�.

		switch (oper) // �Էµ� �����ڿ� ���� ���� �ٸ� ������ �����Ѵ�.
		{
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		}


	}
}