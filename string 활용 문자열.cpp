#include <iostream>
#include <string> 
using namespace std;

int main() {
	string song("Falling in love with you");
	string answer("Elvis Presley"), answer2("elvis"), answer3("ELVIS");
	
	string singer;
	
	cout << song + "를 부른 가수는";
	cout << "(hint - 첫 글자는 " << answer[0] << ")?";
	
	getline(cin, singer);
	if(singer == answer || singer == answer2 || singer == answer3)
		cout << "정답";
 	else
		cout << "땡! 정답은" + answer + "입니다." << endl;
}
