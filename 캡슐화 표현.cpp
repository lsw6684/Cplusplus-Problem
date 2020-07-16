#include <iostream>
using namespace std;

class SinivelCap	//Äà¹° Ã³Ä¡¿ë Ä¸½¶
{
	public:
		void Take() const {
		cout<<"Äà¹° Ä¡·á"<<endl;
	}
};

class SneezeCap		//ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
{
	public:
		void Take() const{
		cout<<"ÀçÃ¤±â Ä¡·á"<<endl;
	}	
};

class SnuffleCap	//ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶
{
	public:
		void Take() const{
		cout<<"ÄÚ ¸·Èû Ä¡·á"<<endl;
	}
};

class ColdPatient
{
	public:
		void TakeSinivelCap(const SinivelCap &cap) const{cap.Take();}
		void TakeSneezeCap(const SneezeCap &cap) const{cap.Take();}
		void TakeSnuffleCap(const SnuffleCap &cap) const{cap.Take();}
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;
	
	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);
	return 0;
}
