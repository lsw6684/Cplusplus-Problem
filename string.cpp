#include<iostream>

int main(void)
{
	int a;
	std::cout<<"원하는 정수의 구구단을 ";
	
	std::cin>>a;
	for(int i=1;i<10;i++)
	std::cout<<a<<"x"<<i<<"="<<a*i<<std::endl;
	
	return 0;
}
