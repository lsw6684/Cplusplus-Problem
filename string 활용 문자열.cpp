#include <iostream>
#include <string> 
using namespace std;

int main() {
	string song("Falling in love with you");
	string answer("Elvis Presley"), answer2("elvis"), answer3("ELVIS");
	
	string singer;
	
	cout << song + "�� �θ� ������";
	cout << "(hint - ù ���ڴ� " << answer[0] << ")?";
	
	getline(cin, singer);
	if(singer == answer || singer == answer2 || singer == answer3)
		cout << "����";
 	else
		cout << "��! ������" + answer + "�Դϴ�." << endl;
}
