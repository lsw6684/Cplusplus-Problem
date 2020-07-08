#include<iostream>

int Adder(int num1=1, int num2=2)
{
	return num1+num2;
}

int main(void)
{
	std::cout<<Adder()<<std::endl;		//그대로 1과 2
	std::cout<<Adder(5)<<std::endl;		//인자를 하나만 전달, 첫 번째 매개변수로 전달
	std::cout<<Adder(3,5)<<std::endl;	//두 개의 인자를 직접 전달, 이러한 경우 매개변수의 디폴트 값은 의미가 없다.
	return 0;
}
