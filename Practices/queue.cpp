#include <iostream>
#include <queue>
using namespace std;

void displayQ(queue <int> q1)
{
	for (int i = 0; i < 5; i++)
	{
		cout << q1.front() << " ";
		q1.pop();
	}
	cout << endl;
}

int main() {
	queue <int> q1; queue <int> q2;
	//inserting elements into the queue1
	for (int i = 0; i < 5; i++)
	{
		q1.push(i + 1);
	}

	cout << "elements 1,2,3,4,5 inserted into queue 1" << endl;
	//inserting elements into the queue 2
	for (int i = 0; i < 5; i++)
	{
		q2.push(i * 10);
	}

	cout << "elements 0, 10, 20, 30, 40 inserted into queue 2" << endl;
	q1.swap(q2);
	cout << "contents after swapping operation" << endl;
	
	cout << "elements of q1 are " << endl;
	displayQ(q1);

	cout << "elements of q1 are " << endl;
	displayQ(q2);
	system("pause");
	return 0;

}