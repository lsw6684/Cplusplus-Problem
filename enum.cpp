#include<iostream>


int main()
{
	enum shape {sphere, cylinder, polygon=7, cube};
	std::cout << sphere << cylinder 
	<< polygon << cube <<std::endl;
	
	shape myFavoriteShape = cylinder;
	std::cout << myFavoriteShape;
	
	return 0;
}
