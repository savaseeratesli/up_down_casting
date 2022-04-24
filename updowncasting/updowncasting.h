#include <iostream>

using namespace std;

class Employe
{
public:
	string empName, empSurname;
	double empSalary;

	//Const
	Employe(string name, string surname, double salary)
	{
		empName = name;
		empSurname = surname;
		empSalary = salary;

	}

	virtual ~Employe()
	{
		cout << "Employe deconst calisti." << endl;
	}

	virtual void display()//Virtual func yaptýk
	{
		cout << "Ad: " << empName << endl;
		cout << "Soyad: " << empSurname << endl;
		cout << "Maas: " << empSalary << endl;
	}
};

class Manager :public Employe//Miras aldý
{
public:
	string mngDepartment;

	Manager(string name, string surname, double salary, string department) :Employe(name, surname, salary)
	{
		mngDepartment = department;
	}

	~Manager()
	{
		cout << "Manager deconst calisti." << endl;
	}

	void display()
	{
		Employe::display();

		cout << "Department: " << mngDepartment << endl;
	}

	void increaseSalary()
	{
		empSalary += 200;
	}

};

//Virtual Func
//reference
void print(Employe& employeType)
{
	employeType.display();
}

//pointer
void print2(Employe* employeType)
{
	employeType->display();
}

//value
void print3(Employe employeType)
{
	employeType.display();
}


class Animal
{
public:
	virtual void talk() = 0;//Soyut sýnýf oldu virtual var nesne oluþmaz
};


class Dog :public Animal
{
public:
	void talk()
	{
		cout << "Hav" << endl;
	}

};

class Cat :public Animal
{
public:
	void talk()
	{
		cout << "Miyav" << endl;
	}

};

class Duck :public Animal
{
public:
	void talk()
	{
		cout << "Vak" << endl;
	}

};











