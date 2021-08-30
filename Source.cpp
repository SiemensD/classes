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
	cout << "��������� ��������� ����� :\n\n";
	cout << "���������� �������� ������� ����� ";
	cin >> LF;
	cout << "���������� �������� �������� ����� ";
	cin >> UF;
	LIFT a(UF, LF);
	cout << "������� ����? 1.�� / 0.��� ==> ";
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
	cout << "������� ���������� ������ ";
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
	cout << "�� ��� �������� ��� ����� " << WP << " �������" << endl;
	sum = a.price * WP;
	cout << "�� ����� " << sum << " $" << endl;
	return 0;
}

int GROUP()
{
	cout << "\t<<��� ��������� ����� ������������ ���������>>";
	cout << endl << endl << endl;
	cout << "��������� '������ ������'";
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