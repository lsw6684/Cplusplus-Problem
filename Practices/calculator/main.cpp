#include "Calculator.h"

int main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char oper;
	while (true) // 무한루프를 돈다.
	{
		cout << "두 정수와 연산자를 입력하세요>>";
		cin >> x >> y >> oper; // 연산을 원하는 두 정수와 연산자를 입력해서 각각의 변수에 저장한다.

		switch (oper) // 입력된 연산자에 따라 각각 다른 연산을 진행한다.
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