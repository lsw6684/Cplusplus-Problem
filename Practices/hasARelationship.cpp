#include <iostream>
using namespace std;
class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) :bullet(bnum)
	{}
	void Shot()
	{
		cout << "shot" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff) :Gun(bnum), handcuffs(bcuff)
	{}
	void PutHandCuff()
	{
		cout << "HandCuff" << endl;
		handcuffs--;
	}
};

int main()
{
	Police pman(5, 3);
	pman.Shot();
	pman.PutHandCuff();
	system("pause");
	return 0;
}