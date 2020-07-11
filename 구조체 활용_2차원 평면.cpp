#include <iostream>
using namespace std;

typedef struct __point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2)
{
	Point * pptr=new Point;
	pptr->xpos=p1.xpos+p2.xpos;
	pptr->ypos=p1.ypos+p2.ypos;
	return *pptr;
}

int main(void)
{
	Point *pptr1=new Point;
	pptr1->xpos=3;
	pptr1->ypos=30;
	
	Point *pptr2=new Point;
	pptr2->xpos=70;
	pptr2->ypos=7;
	
	Point &pref=PntAdder(*pptr1, *pptr2);
	cout<<"["<<pref.xpos<<", "<<pref.ypos<<"]"<<endl;
	
	delete pptr1;		//더 이상의 활용이 없다면 출력과 관련없다. 
	delete pptr2;
	delete &pref;
	return 0;
	
}
