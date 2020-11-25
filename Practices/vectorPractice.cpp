#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> vector1;

	vector1.push_back(20);
	vector1.push_back(30);

	cout << "First Insert test" << endl;

	//insert item (100) at the first postion
	vector<int>::iterator iterInsertPos = vector1.begin();
	vector1.insert(iterInsertPos, 100);

	//insert 100, 20, 30
	vector<int>::iterator iterEnd = vector1.end();
	for (vector<int>::iterator iterPos = vector1.begin(); iterPos != iterEnd; ++iterPos)
	{
		cout << "vector1: " << *iterPos << endl;
	}

	cout << "Second Insert test" << endl;

	//insert two items (200) at the second position
	iterInsertPos = vector1.begin();
	++iterInsertPos;	//second position
	vector1.insert(iterInsertPos, 2, 200);

	//print 100, 200, 200, 20, 30
	iterEnd = vector1.end();
	for (vector<int>::iterator iterPos = vector1.begin(); iterPos != iterEnd; ++iterPos)
	{
		cout << "vector1 : " << *iterPos << endl;
	}
	cout << "Third Insert test" << endl;

	vector<int> vector2;
	vector2.push_back(1000);
	vector2.push_back(2000);
	vector2.push_back(3000);

	//insert vector2's all data at the second position of vector1
	//insert방법이 좀 특이하네..
	iterInsertPos = vector1.begin();
	vector1.insert(++iterInsertPos, vector2.begin(), vector2.end());
	
	//print 100, 1000, 2000, 3000, 200, 200, 20, 30
	iterEnd = vector1.end();
	for (vector<int>::iterator iterPos = vector1.begin(); iterPos != iterEnd; ++iterPos)
	{
		cout << "vector1 : " << *iterPos << endl;
	}

	system("pause");

}