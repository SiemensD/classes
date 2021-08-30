#include<iostream>
using namespace std;

class LIFT
{
public:

	LIFT(int UF,int LF)
	{
		this->UpperFloor = UF;
		this->LowerFloor = LF;
		this->Floor = LF;
		this->Work = true;
	}
	void SetUpperFloor()
	{
		cout << "Верхний этаж = ";
		cin >> UpperFloor;
	}
	void SetLowerFloor()
	{
		cout << "Нижний этаж = ";
		cin >> LowerFloor;
	}
	void SetWork()
	{
		do
		{
			system("cls");
			cout << "Лифт(1.ВКЛ / 0.ВЫКЛ) : ";
			cin >> Work;
		} while (Work<0||Work>1);
	}
	bool GetWork()
	{
		if (Work)
		{
			cout << "Лифт работает!" << endl;
		}
		else
		{
			cout << "Лифт не работает!" << endl;
		}
		return Work;
	}
	void SetFloor()
	{
		do
		{
			cout << "Выберите нужный этаж : ";
			cin >> Floor;
			if (Floor > UpperFloor || Floor < LowerFloor)
			{
				cout << "Ошибка! Такого этажа нет!" << endl;
			}
		} while (Floor > UpperFloor || Floor < LowerFloor);
		cout << "Вы на " << Floor << " этаже" << endl;
	}
	int GetFloor()
	{
		return Floor;
	}

private:
	int UpperFloor;
	int LowerFloor;
	int Floor;
	bool Work;

};

