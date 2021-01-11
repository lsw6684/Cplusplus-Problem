#include <iostream>
#include <vector>
using namespace std;

int main() {
	int nUser(0); // 유저가 입력하는 정수를 받을 변수
	vector<int> v;
	vector<int>::iterator it;
	int sum; // 평균을 내기 위해서는 vector에 있는 원소의 합을 구하는 게 우선이다.
	double avg; // 평균을 나타내는 변수
	while (true) {
		sum = 0; // 매 실행 별 합을 새로 도출해내야 하므로 초기화 실행문을 넣어준다.
		cout << "정수를 입력하세요(0을 입력하면 종료)>>";
		cin >> nUser;
		if (nUser == 0) // 유저가 입력한 숫자가 0이었을 경우, 반복문을 빠져나간 후 프로그램을 종료한다.
			break;
		v.push_back(nUser);
		for (it = v.begin(); it != v.end(); it++) {
			cout << *it << ' ';
			sum += *it; // vector의 시작점부터 vector의 끝까지 iterator 변수 it가 순회적으로 원소값들을 가리킨다.
						// 그 가리키는 값들을 간접지정연산으로 sum에 합산해준다.
		}
		cout << endl;
		avg = (double)sum / v.size();
		cout << "평균 = " << avg << endl;
	}
	return 0;
}