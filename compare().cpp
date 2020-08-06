#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string name = "Kitae";
	string a = "Aitae", b = "Kitae", c = "Zitae";
	
	int res1 = name.compare(a); //name과 a를 비교
	int res2 = name.compare(b); //name과 b를 비교
	int res3 = name.compare(c); //name과 c를 비교
	cout << res1 << endl << res2 << endl << res3;
	//name의 Kitae를 중심으로 비교하여 Kitae 위치에서의 1, 0, -1 출력 
	 
 } 
