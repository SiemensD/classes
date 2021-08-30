#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

class Subjects
{
private:
	string name;
	int Mark;
public:
	Subjects()
	{
		this->name = "";
		this->Mark = 0;
	}

	friend class Students;
};

class Students : public Subjects
{
public:

	Students()
	{
		cout << "������� ��� �������� : ";
		getline(cin, name);
		this->name = name;
		this->sum = 0;
		this->min = 12;
		this->max = 0;

		List[0].name = "�������";
		List[1].name = "������";
		List[2].name = "�����";
		List[3].name = "���-��";
		List[4].name = "�����";
		for (size_t i = 0; i < 5; i++)
		{			
			cout << List[i].name;
			cout << " :\n������� ������ ==> ";
			cin >> List[i].Mark;
			cin.ignore();
		}
		for (int i = 0; i < 5; i++)
		{
			this->sum += List[i].Mark;
		}
		this->sum /= 5;	
		for (int i = 0; i < 5; i++)
		{
			if (List[i].Mark < this->min)
				this->min = List[i].Mark;
			if (List[i].Mark > this->max)
				this->max = List[i].Mark;
		}		
	}

	void Print(int size)
	{		
		cout << this->name << " : \n";
		for (size_t i = 0; i < size; i++)
		{
			cout << List[i].name << "\t - " << List[i].Mark << endl;
		}
		cout << "������� ����:  " << this->sum << endl;
		cout << "����������� ����:  " << this->min << endl;
		cout << "������������ ��� ����:  " << this->max << endl<<endl;
	}
	
	friend class Group;

private :

	Subjects List[5];
	float sum;
	int min;
	int max;
};

class Group : public Subjects
{
public:
	Group()
	{
		for (size_t i = 0; i < 5; i++)
		{
			GROUP[i];
			this->averGroup += GROUP[i].sum;
		}
		this->averGroup /= 5;
	}
	Students GROUP[5];
	float averGroup = 0;	

	void Print()
	{
		system("cls");
		for (size_t i = 0; i < 5; i++)
		{
			GROUP[i].Print(5);									
		}		
		cout << "������� ���� ������:  " << this->averGroup << endl;
	}		
	
};

