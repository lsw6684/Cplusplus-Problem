#include<iostream>

int main(void)
{
	char name[20], number[20];
	
	std::cout<<"전화번호 입력"<<std::endl;
	std::cin>>number;
	std::cout<<"이름 입력"<<std::endl;
	std::cin>>name;
	
	std::cout<<number<<std::endl<<name;
	
}