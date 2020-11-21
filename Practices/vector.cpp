#include<iostream>
#include<vector>
using namespace std;


double avg(vector<int> v)
{
	double avg = 0;
	//int size = v.size();
	for (int i = 0; i < v.size(); i++)
	{
		avg += v[i];
	}
	return avg / v.size();
}

int max(vector<int> v)
{
	int max = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (max < v[i]) max = v[i];
	}
	return max;
}

int min(vector<int> v)
{
	int min = v[0];
	for (int i = 0; i < v.size(); i++)
	{
		if (min > v[i]) min = v[i];
	}
	return min;
}

int main()
{
	vector<int> vec1;

	vec1.push_back(2);
	vec1.push_back(3);
	vec1.push_back(9);
	vec1.push_back(5);
	vec1.push_back(7);

	cout << "Average: " << avg(vec1) << endl;
	cout << "Maximum: " << max(vec1) << endl;
	cout << "Minimum: " << min(vec1) << endl;

	system("pause");
}