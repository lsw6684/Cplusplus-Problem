#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> m;
	m.insert(pair<int, int>(5, 100)); // insert pair
	m.insert(pair<int, int>(3, 100));

	pair<int, int> p(9, 50);
	m.insert(p);	//create pair object
	m[11] = 200;
	m[12] = 200;
	m[13] = 40;

	map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first << "," << (*iter).second << ")" << " ";
	cout << endl;

	m[13] = 140; //key//value update

	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	cout<<endl;

	pair<map<int, int>::iterator, bool> pr;

	//insert success
	pr = m.insert(pair<int, int>(10, 30));
	if (true == pr.second)
		cout << "key : " << pr.first->first << ", value: " << pr.first->second << " completed" << endl;
	else
		cout << "key(10) is already in the map" << endl;

	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << iter->first << "," << iter->second << ")" << " ";
	cout << endl;

	//insert failed (redundant key)
	pr = m.insert(pair<int, int>(10, 40));
	if (true == pr.second)
		cout << "key: " << pr.first->first << ", value: " << pr.first->second << " completed" << endl;
	else
		cout << "key(10) is already in the map" << endl;

	system("pause");

	return 0;

}