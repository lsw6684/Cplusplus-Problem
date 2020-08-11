#include <iostream>
#include <stdlib.h>
using namespace std;

//리턴 타입을 bool로 하고 평균값을 전달하기 위해 참조 매개 변수를 추가함.
bool average(int a[], int size, int& avg)
{
	if(size <= 0)
	return false;
	int sum = 0;
	for(int i=0; i<size; i++)
	sum += a[i];
	avg = sum/size;	//참조 매개 변수 avg에 평균값 전달 
	return true;	
}

int main()
{
	int x[] = {0, 1, 2, 3, 4, 5};
	int avg;
	if(average(x, 6, avg))
	cout << "평균 : " << avg << endl;	//avg는 평균, average()는 true 
	else
	cout << "매개 변수 오류" << endl;
	
	if(average(x, -2, avg))				//avg는 의미없고 average()는 false 
	cout << "평균 : " << avg << endl;
	else
	cout << "매개 변수 오류" << endl;
	
	system("pause");
}
