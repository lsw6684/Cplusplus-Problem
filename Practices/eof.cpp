#include<iostream>

int main(){
	int ival, sum;
	while (std::cin>>ival, !std::cin.eof())
	sum+=ival;
	
	std::cout << sum;
	system("pause");
}

