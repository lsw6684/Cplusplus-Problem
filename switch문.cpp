#include <iostream>
using namespace std;

int main(){
	int score, div;
	
	cout<<"������ �Է��ϼ��� : ";
	cin >> score;
	if(score > 100 || score < 0)
	{
		cout<<"�ٽ� �Է��ϼ���.";
		return 0; 
	} 
	
	div = score/10;
	switch(div){
		case 10:
		case 9:
			cout << "A�Դϴ�.";
			break;
		case 8:
			cout << "B�Դϴ�.";
			break;
		case 7:
			cout << "C�Դϴ�.";
			break;
		case 6:
			cout <<"D�Դϴ�.";
		default :
			cout <<"F�Դϴ�. ����� ��~";
			break;
	}
}

