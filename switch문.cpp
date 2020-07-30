#include <iostream>
using namespace std;

int main(){
	int score, div;
	
	cout<<"점수를 입력하세요 : ";
	cin >> score;
	if(score > 100 || score < 0)
	{
		cout<<"다시 입력하세요.";
		return 0; 
	} 
	
	div = score/10;
	switch(div){
		case 10:
		case 9:
			cout << "A입니다.";
			break;
		case 8:
			cout << "B입니다.";
			break;
		case 7:
			cout << "C입니다.";
			break;
		case 6:
			cout <<"D입니다.";
		default :
			cout <<"F입니다. 재수강 고~";
			break;
	}
}

