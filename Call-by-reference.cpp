#include <iostream>
using namespace std;

void IncreOne(int &num)
{
	num++; 
}

void InverSign(int &num)
{
	num*=-1;
}

int main(void)
{
	int val=20;
	IncreOne(val);
	cout<<val<<endl;
	
	InverSign(val);
	cout<<val<<endl;
	return 0;
}
