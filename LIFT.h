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
		cout << "������� ���� = ";
		cin >> UpperFloor;
	}
	void SetLowerFloor()
	{
		cout << "������ ���� = ";
		cin >> LowerFloor;
	}
	void SetWork()
	{
		do
		{
			system("cls");
			cout << "����(1.��� / 0.����) : ";
			cin >> Work;
		} while (Work<0||Work>1);
	}
	bool GetWork()
	{
		if (Work)
		{
			cout << "���� ��������!" << endl;
		}
		else
		{
			cout << "���� �� ��������!" << endl;
		}
		return Work;
	}
	void SetFloor()
	{
		do
		{
			cout << "�������� ������ ���� : ";
			cin >> Floor;
			if (Floor > UpperFloor || Floor < LowerFloor)
			{
				cout << "������! ������ ����� ���!" << endl;
			}
		} while (Floor > UpperFloor || Floor < LowerFloor);
		cout << "�� �� " << Floor << " �����" << endl;
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

