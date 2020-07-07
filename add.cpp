#include<iostream>

int main(void)
{
	int result=0, a;
	for(int i=1; i<6; i++)
	{
		std::cout<<i<<"번째 정수 입력: "<<std::endl;
		std::cin>>a;
		result+=a;
	}
	std::cout<<result;
	return 0;
	
}
