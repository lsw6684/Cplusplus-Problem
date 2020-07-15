#include <iostream>
using namespace std;

class Calculator
{
	private:
		int numOfAdd;
		int numOfMin;
		int numOfDiv;
		int numOfMul;
	public:
		void Init();
		double Add(double num1, double num2);
		double Min(double num1, double num2);
		double Div(double num1, double num2);
		double Mul(double num1, double num2);
		void ShowOpCount();
};

void Calculator::Init()
{
	numOfAdd = 0;
	numOfMin = 0;
	numOfDiv = 0;
	numOfMul = 0;
}

double Calculator::Add(double num1, double num2)
{
	numOfAdd++;
	return num1 + num2;
}
double Calculator::Min(double num1, double num2)
{
	numOfMin++;
	return num1 - num2;
}
double Calculator::Div(double num1, double num2)
{
	numOfDiv++;
	return num1 / num2;
}
double Calculator::Mul(double num1, double num2)
{
	numOfMul++;
	return num1 * num2;
}

void Calculator::ShowOpCount()
{
	cout<<"���� : "<<numOfAdd<<' ';
	cout<<"���� : "<<numOfMin<<' ';
	cout<<"���� : "<<numOfMul<<' ';
	cout<<"������ : "<<numOfDiv<<endl;
}




int main(void)
{
	Calculator cal;
	cal.Init();
	cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
	cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
	cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
	cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
	cal.ShowOpCount();
	return 0;
}
