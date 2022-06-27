#include<iostream>
#include<ctime>
using namespace std;
class Player
{
	int id;
	long long balans;
	int ESM;
	int EGP;
	int prostfab;
	int krutafab;
	bool Starsh;
public:
	Player()
	{
		balans = 10000;
		ESM = 4;
		EGP = 2;
		prostfab = 2;
		krutafab = 0;
		if (id == 1)
		{
			Starsh = true;
		}
		else
		{
			Starsh = false;
		}
	}
	Player(int i)
	{
		id = i;
		balans=10000;
		ESM=4;
		EGP=2;
		prostfab=2;
		krutafab=0;
		if (id==1)
		{
			Starsh=true;
		}
		else
		{
			Starsh = false;
		}
	}
	int GetID()
	{
		return id;
	}
	int GetBalans()
	{
		return balans;
	}
	int GetESM()
	{
		return ESM;
	}
	int GetEGP()
	{
		return EGP;
	}
	int GetProstfab()
	{
		return prostfab;
	}
	int GetKrutafab()
	{
		return krutafab;
	}
	bool GetStarsh()
	{
		return Starsh;
	}
	void SetID(int i)
	{
		id=i;
	}
	void SetBalans(int b)
	{
		balans=b;
	}
	void SetESM(int e)
	{
		ESM=e;
	}
	void SetEGP(int e)
	{
		EGP=e;
	}
	void SetProstfab(int p)
	{
		prostfab=p;
	}
	void SetKrutafab(int k)
	{
		krutafab=k;
	}
	void SetStarsh(bool s)
	{
		Starsh=s;
	}
};
//class Players
//{
//	int count;
//	Player players[10];
//public:
//	Players(int count1)
//	{
//		count = count1;
//		players[count];
//	}
//	void Dobav()
//	{
//		for (int i=0;i< count;i++)
//		{
//			players[i].SetID(i);
//		}
//	}
//	int GetCount()
//	{
//		return count;
//	}
//
//};
class Bank 
{
	int first;

public:
	Bank() 
	{
		first=2;
	}
	void Nalog(Player player)
	{
		player.SetBalans(player.GetBalans()- player.GetESM()*300- player.GetEGP() * 500- player.GetProstfab() * 1000 - player.GetKrutafab() * 1500);
	}
	void Birga(int P)
	{
		int matrix[5][12] = {
		{1,1,1,1,2,2,2,2,3,3,4,5},
		{1,1,1,2,2,2,2,3,3,3,4,5},
		{1,2,2,2,3,3,3,3,4,4,4,5},
		{1,2,3,3,3,4,4,4,4,5,5,5},
		{1,2,3,3,4,4,4,4,5,5,5,5}
		};
		int ESM[5]{ 1,2,2,3,3 };
		int costESM[5]{ 800,650,500,400,300 };
		int EGP[5]{ 3,3,2,2,1 };
		int costEGP[5]{ 6500,6000,5500,5000,4500 };
		int buff = rand() % 12;
		int cled = matrix[first][buff];
		cout << " Level: " << cled;
		cout << " ESM: " << ESM[cled - 1] * P;
		cout << " Min cost: " << costESM[cled - 1];
		cout << " EGP: " << EGP[cled - 1] * P;
		cout << " Max cost: " << costEGP[cled - 1];
		cout << endl;
		first = cled - 1;
	}
	void Zayvki()
	{

	}

};
int main()
{
	srand(time(NULL));


	return 0;

}