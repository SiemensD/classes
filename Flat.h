#include<iostream>
using namespace std;

class Room
{
public:
	double SQR;
	Room()
	{
		cout << "������� �������� ������� : ";
		cin >> name;
		cout << "������� ������� ������� :\n";
		cout << "������ = ";
		cin >> x;
		cout << "����� = ";
		cin >> y;
		cout << "������ = ";
		cin >> z;
		cout << "������ �������? 1.�� / 0.��� ==> ";
		cin >> ceiling;
		SQR = (2 * x + 2 * y) * z;
	}
	void Print()
	{
		cout << "\n�������� ������� : " << name;
		cout << "\n*****************************\n";
		cout << "������ = " << x << endl;
		cout << "����� = " << y << endl;
		cout << "������ = " << z << endl;
		cout << "������� ���� = " << SQR << endl;
		if (ceiling)
		{
			cout << "������� ������" << endl;
			cout << "������� ������� = " << x * y << endl;
		}
		else
		{
			cout << "������� �� ������" << endl;
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
		cout << "\n�������� : " << name;
		cout << "\n*****************************\n";
		cout << "������ = " << x << endl;
		cout << "����� = " << y << endl;
		cout << "���� = " << price <<" $"<< endl;
    }

	string name;
	double x;
	double y;
	double price;
};

Wallpaper::Wallpaper()
{
	cout << "������� �������� ����� : ";
	cin >> name;
	cout << "������� ������� ������ :\n";
	cout << "������ = ";
	cin >> x;
	cout << "����� = ";
	cin >> y;
	cout << "������� ���� ������ ";
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

