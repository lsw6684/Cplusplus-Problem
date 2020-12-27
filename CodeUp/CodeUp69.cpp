#include <iostream>
#include <string>
using namespace std;
int main() {
	string a;
	cin >> a;

	if (a == "A")
		cout << "best!!!";
	else if (a == "B")
		cout << "good!!";
	else if (a == "C")
		cout << "run!";
	else if (a == "D")
		cout << "slowly~";
	else
		cout << "what?";

	system("pause");
	return 0;
}