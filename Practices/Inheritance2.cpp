#pragma warning (disable: 4996)
#include <iostream>
#include <string.h>

using namespace std;

class Gun
{
private:
	int bullet;
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "Shot" << endl;
		bullet--;
	}
};

class Police : public Gun
{
private:
	int handcuffs;
public:
	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff)
	{}
		void PutHandCuff()
		{
			cout << "HnadCuff" << endl;
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