#include<iostream>

int main(void)
{
	int a;
	std::cout<<"구구단을 위한 정수 입력\n";
	
	std::cin>>a;
	for(int i=1;i<10;i++)
	std::cout<<a<<"x"<<i<<"="<<a*i<<std::endl;
	
	return 0;
}
