#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
	string s;
	cout << "사또>>";
	cin >> s;

	string t;
	cout << "아랑>>";
	cin >> t;

	// 사또가 이기는 경우
	if (s == "가위" && t == "보")
		cout << "사또가 이겼습니다." << endl;
	else if (s == "바위" && t == "가위")
		cout << "사또가 이겼습니다." << endl;
	else if (s == "보" && t == "바위")
		cout << "사또가 이겼습니다." << endl;

	// 아랑이 이기는 경우
	else if (t == "가위" && s == "보")
		cout << "아랑이 이겼습니다." << endl;
	else if (t == "바위" && s == "가위")
		cout << "아랑이 이겼습니다." << endl;
	else if (t == "보" && s == "바위")
		cout << "아랑이 이겼습니다." << endl;
	return 0;
}