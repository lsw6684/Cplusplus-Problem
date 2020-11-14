#include <iostream>

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
    a = b;
    b = temp;
}

void main(void)
{
	int a = 5, b = 7;
	char c = 'c', d = 'd';
	swap(a, b);
	swap(c, d);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	system("pause");
}