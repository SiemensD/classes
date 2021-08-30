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
		cout << "Введите ФИО студента : ";
		getline(cin, name);
		this->name = name;
		this->sum = 0;
		this->min = 12;
		this->max = 0;

		List[0].name = "Алгебра";
		List[1].name = "Физика";
		List[2].name = "Химия";
		List[3].name = "Физ-ра";
		List[4].name = "Труды";
		for (size_t i = 0; i < 5; i++)
		{			
			cout << List[i].name;
			cout << " :\nВведите оценку ==> ";
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
		cout << "Средний балл:  " << this->sum << endl;
		cout << "Минимальный балл:  " << this->min << endl;
		cout << "Максимальный бал балл:  " << this->max << endl<<endl;
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
		cout << "Средний балл группы:  " << this->averGroup << endl;
	}		
	
};

