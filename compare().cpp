#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

int main()
{
	string name = "Kitae";
	string a = "Aitae", b = "Kitae", c = "Zitae";
	
	int res1 = name.compare(a); //name�� a�� ��
	int res2 = name.compare(b); //name�� b�� ��
	int res3 = name.compare(c); //name�� c�� ��
	cout << res1 << endl << res2 << endl << res3;
	//name�� Kitae�� �߽����� ���Ͽ� Kitae ��ġ������ 1, 0, -1 ��� 
	 
 } 
