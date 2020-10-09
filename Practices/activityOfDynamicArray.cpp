#include <iostream>
using namespace std;
class RanArr {
public:
	int n = 10;
	RanArr()  {
		ar = new int[n];
		for (int i = 0; i < n; i++) {
			ar[i]= rand() % 100 + 1;
		}
	}
	void print(){
		for (int i = 0; i < n; i++) {
			cout << ar[i] << " ";
		}
		cout << endl;

	}
	~RanArr() {
		ar;
	}
private:
	int* ar;
};

void main() {
	RanArr ran;
	ran.print();
	system("pause");
}
