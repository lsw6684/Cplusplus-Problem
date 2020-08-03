#include <iostream>
#include <stdlib.h>

using namespace std;

class Circle
{
	int radius;
public:
	Circle();
	~Circle(){}
	void setRadius(int r)
	{
		radius = r;
	}
	double getArea()
	{
		return 3.14*radius*radius;
	}
};

Circle::Circle()
{
	radius = 1;
}

int main()
{
	cout << "�����ϰ��� �ϴ� ���� ������ �Է��ϼ��� : ";
	int n, radius;
	cin >> n;
	if(n <= 0)
		return 0;
	Circle *pArray = new Circle [n];
	for(int i=0; i<n; i++)
	{
		cout << "��" << i+1 << ":";
		cin >> radius;	//������ �Է�
		pArray[i].setRadius(radius); 
	}
	int count = 0;	//ī��Ʈ ����
	Circle *p = pArray;
	for(int i = 0; i < n; i++)
	{
		cout << p -> getArea() << ' ';	//���� ���� ���
		if(p -> getArea() >= 100 && p->getArea() <= 200)
			count++;
		p++;
	}
	 cout << endl << "������ 100���� 200 ������ ���� ������ " << count <<endl;
	 delete [] pArray;	//��ü �迭 �Ҹ� 
	
	 
	system("pause");
}
