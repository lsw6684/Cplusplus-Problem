#include <iostream>
using namespace std;

bool equalArray(int* p, int* q, int size); // �Լ��� ���� ����

int main() {
	int a[] = {1,2,3,4,5};
	int b[] = {1,2,3,4,5};
	
	if(equalArray(a, b, 5)) 
		cout << "arrays equal" << "\n";
	else 
		cout << "arrays not equal" << "\n";
}

bool equalArray(int* p, int* q, int size) {
	int i;
	for(i=0; i<size; i++) {
		if(*p != *q) 
			return false;
		p++; // p�� �迭 a�� ���� ���Ҹ� ����Ŵ
		q++; // q�� �迭 b�� ���� ���Ҹ� ����Ŵ
	}
	return true;
}

/*
bool equalArray(int p[], int q[], int size) {
	int i;
	for(i=0; i<size; i++) 
		if(p[i] != q[i]) return false;
	return true;
}*/