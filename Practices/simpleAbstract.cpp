#include <iostream>

using namespace std;

class Animal
{
public:
	virtual ~Animal() {} // Virtual destructor
	virtual void Cry() = 0; //Pure virtual function
};

class Dog : public Animal
{
public:
	virtual void Cry() { cout << "Dog Cry!" << endl; }
};

class Cat : public Animal
{
public:
	virtual void Cry()
	{
		cout << "Cat Cry!" << endl;
	}
};

int main(void)
{
	Dog my_dog;
	my_dog.Cry();
	Cat my_cat;
	my_cat.Cry();
	system("pause");
	return 0;
}