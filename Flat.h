#include<iostream>
using namespace std;

class Room
{
public:
	double SQR;
	Room()
	{
		cout << "Введите название комнаты : ";
		cin >> name;
		cout << "Введите размеры комнаты :\n";
		cout << "Ширина = ";
		cin >> x;
		cout << "Длина = ";
		cin >> y;
		cout << "Высота = ";
		cin >> z;
		cout << "Клеить потолок? 1.ДА / 0.НЕТ ==> ";
		cin >> ceiling;
		SQR = (2 * x + 2 * y) * z;
	}
	void Print()
	{
		cout << "\nНазвание комнаты : " << name;
		cout << "\n*****************************\n";
		cout << "Ширина = " << x << endl;
		cout << "Длина = " << y << endl;
		cout << "Высота = " << z << endl;
		cout << "Площадь стен = " << SQR << endl;
		if (ceiling)
		{
			cout << "Потолок клеить" << endl;
			cout << "Площадь потолка = " << x * y << endl;
		}
		else
		{
			cout << "Потолок не клеить" << endl;
		}

	}
private:

	string name;
	double x;
	double y;
	double z;
	bool ceiling;
};
class Wallpaper
{
public:
	double SQR;
	Wallpaper();
	void Print()
	{
		cout << "\nНазвание : " << name;
		cout << "\n*****************************\n";
		cout << "Ширина = " << x << endl;
		cout << "Длина = " << y << endl;
		cout << "Цена = " << price <<" $"<< endl;
    }

	string name;
	double x;
	double y;
	double price;
};

Wallpaper::Wallpaper()
{
	cout << "Введите название обоев : ";
	cin >> name;
	cout << "Введите размеры рулона :\n";
	cout << "Ширина = ";
	cin >> x;
	cout << "Длина = ";
	cin >> y;
	cout << "Введите цену рулона ";
	cin >> price;
	SQR = x * y;
}

class Flat
{
public:
	Flat(int size);
	~Flat();
	void Print()
	{
		system("cls");
		for (size_t i = 0; i < this->size; i++)
		{
			a[i].Print();
		}
	}

	int size;
	Room* a;
};

Flat::Flat(int size)
{
	this->size = size;
	this->a = new Room[size];
	for (size_t i = 0; i < size; i++)
	{
	    a[i];
	}
}

Flat::~Flat()
{
	delete[]a;
}

