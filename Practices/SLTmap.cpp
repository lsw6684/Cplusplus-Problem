#include <iostream>
#include <map>
using namespace std;
int main()
{
	map <char, int> my_map;
	char find_c;

	//insert elements using insert function
	my_map.insert(pair<char, int>('a', 1));
	my_map.insert(pair<char, int>('b', 2));
	my_map.insert(pair<char, int>('c', 3));


	//map keys are sotred automatically from lower to higher.
	map<char, int>::iterator iter;
	iter = my_map.begin();

	//erase the first element using the erase function
	my_map.erase(iter);

	//output the size of the map
	cout << "Size of my_map: " << my_map.size() << endl;
	find_c = 'c';

	//find will return an iterator to the matching element if it is found
	//or to the end of the map if the key is not found
	iter = my_map.find(find_c);
	if (iter != my_map.end())
		cout << "Key is: " << iter->first << "," "" << "Value is: " << iter->second << '\n';
	else
		cout << "Key is not in my_map" << '\n';

	//clear the entires in the map
	my_map.clear();
	system("pause");

	
}