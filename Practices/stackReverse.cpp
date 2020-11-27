#include <iostream>
#include <stack>
using namespace std;

void print_reverse(const char* s)
{

	stack<char> stack;
	for (int i = 0; i < strlen(s); i++)
	{
		stack.push(s[i]);
	}
	while (!stack.empty())
	{
		cout << stack.top();
		stack.pop();
	}
 }

void main()
{
	char str[100];
	cout << "Input String: ";
	cin >> str;
	cout << "Reverse: ";
	print_reverse(str);
	cout << endl;
	system("pause");
}