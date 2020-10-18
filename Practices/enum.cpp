#include<iostream>

int main(){
	enum shape { sphere, cylinder, polygon = 7, cube};
	std::cout << sphere << cylinder << polygon << cube;
	std::cout << std::endl;
	
	shape myFavouriteShape = cylinder;
	std::cout << myFavouriteShape;
	system("pause");
}
