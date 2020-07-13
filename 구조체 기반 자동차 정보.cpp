#include <iostream>
using namespace std;
//4~8 구조체 Car와 관련된 각종 정보를 상수화.  
#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10		

struct Car
{
	char gamerID[ID_LEN];				//소유자 ID
	int fuelGauge;						//연료량
	int curSpeed;						//현재속도 
};

void ShowCarState(const Car &car)		//차의 정보를 출력. 
{										//단순히 정보를 출력만 하여 const참조자를 매개변수로 선언
	cout<<"소유자ID: "<<car.gamerID<<endl;
	cout<<"연료량: "<<car.fuelGauge<<"%"<<endl;
	cout<<"현재속도: "<<car.curSpeed<<"km/s"<<endl<<endl; 
}

void Accel(Car &car)					//엑셀에 의한 연료, 스피드 변화 
{
	if(car.fuelGauge<=0)
		return;
	else
		car.fuelGauge-=FUEL_STEP;
		
	if(car.curSpeed+ACC_STEP>=MAX_SPD)
	{
		car.curSpeed=MAX_SPD;
		return;
	}
	
	car.curSpeed+=ACC_STEP;
 } 
 
void Break(Car &car)					//브레이크, 단순히 속도 감속만 표현함. 
{
	if(car.curSpeed<BRK_STEP)
	{
		car.curSpeed=0;
		return;
	}
	
	car.curSpeed-=BRK_STEP;
}

int main(void)
{
	Car run99 = {"run99", 100, 0};		//구조체 변수의 선언 및 초기화 
	Accel(run99);						//엑셀, 브레이크 상황 연출 
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);
	
	Car sped77 = {"sped77", 100, 0};
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}
