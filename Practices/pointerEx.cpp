#include <iostream>

void doubleIt(int x, int*p)
{
	*p = 2*x;
}

int main(int argc, const char*argv[])
{
	int a= 16;
	doubleIt(9, &a);
	
	std::cout<<a;
	system("pause");

	return 0;
}
