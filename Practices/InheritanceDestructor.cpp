#pragma warning (disable:4996)
#include <iostream>
#include <string.h>

using namespace std;

class Shape {
protected:
	double width, height;
public:
	Shape(int w = 0, int h = 0) { width = w; height = h; }
	//To be defined
	string name;
	virtual string get_name() {
		return name;
	}
	virtual int get_area(){
		return 0;
	}
	virtual ~Shape()
	{
		cout << "Destructor : Shape" <<endl;
	}
};

class Oval : public Shape {
private:
	char* name;
public:
	Oval(const char* n, int w, int h) : Shape(w, h) {
		name = new char[20];
		strcpy(name, n);
	}
	//To be defined
	
	int get_area()
	{
		return width * height * 3.14;
	}
	~Oval()
	{
		cout << "Destructor : Oval" << endl;
		delete[] name;
	}

};

class Rect : public Shape {
private:
	char* name;
public:
	Rect(const char* n, int w, int h) : Shape(w, h) {
		name = new char[20];
		strcpy(name, n);
	}
	//To be defined
	int get_area()
	{
		return width * height;
	}
	~Rect()
	{
		cout << "Destructor : Rect" << endl;
		delete[]name;
	}
};

class Triangle : public Shape {
private:
	char* name;
public:
	Triangle(const char* n, int w, int h) : Shape(w, h) {
		name = new char[20];
		strcpy(name, n);
	}
	//To be defined
	int get_area()
	{
		return width * height/2;
	}
	~Triangle()
	{
		cout << "Destructor : Triangle" << endl;
		delete[]name;
	}
};

int main() {
	Shape* p[3];
	p[0] = new Oval("Flowerpot", 10, 20);
	p[1] = new Rect("Book", 30, 40);
	p[2] = new Triangle("Toast ", 30, 40);
	for (int i = 0; i < 3; i++)
		cout << p[i]->get_name() << "'s area: " << p[i]->get_area() << endl;
	for (int i = 0; i < 3; i++) delete p[i];
	delete p;
	system("pause");
	return 0;
}


