#include<Windows.h>
#include<string>
#include"LIFT.h"
#include"Flat.h"
#include"Group.h"

using namespace std;

int Lift()
{
	int menu;
	int UF, LF;
	cout << "Установка диапазона лифта :\n\n";
	cout << "Установите значение нижнего этажа ";
	cin >> LF;
	cout << "Установите значение верхнего этажа ";
	cin >> UF;
	LIFT a(UF, LF);
	cout << "Вызвать лифт? 1.ДА / 0.Нет ==> ";
	cin >> menu;
	if (menu!=1)
	{
		return 0;
	}
	else
	{
		if (!a.GetWork())
		{
			return 0;
		}
		a.SetFloor();
	}
}
int ROOM()
{
	int num;
	double sum;
	double SQR = 0;
	int WP;
	cout << "Введите количество комнат ";
	cin >> num;
	Flat bb(num);
	bb.Print();
	Wallpaper a;
	a.Print();
	for (size_t i = 0; i < num; i++)
	{
		SQR += bb.a[i].SQR;
	}
	WP = SQR / a.SQR + 1;
	cout << "На всю квартиру Вам нужно " << WP << " рулонов" << endl;
	sum = a.price * WP;
	cout << "На сумму " << sum << " $" << endl;
	return 0;
}

int GROUP()
{
	cout << "\t<<ЭТО ПРОГРАММА УЧЕТА УСПЕВАИМОСТИ СТУДЕНТОВ>>";
	cout << endl << endl << endl;
	cout << "Заполните 'Журнал оценок'";
	cout << endl << endl;

	Group a;
	a.Print();
	return 0;
}


int main()
{
	setlocale(0,"");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//Lift();
	//ROOM();
	//GROUP();

	return 0;
}