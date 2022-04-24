#include <iostream>
#include "updowncasting.h"

using namespace std;

void aralik()
{
	cout << "############################" << endl;
}

int main()
{
	/*
	//Upcasting
	//Ana classtan pointer ürettim,miras alan sıınıftan nesne ürettim
	Employe* emp1,*emp2;
	Manager mng("savas", "eratesli", 5000, "software");
	Employe emp3("nazli", "isler", 50000);

	emp1 = &mng;//Upcasting
	//Pointera miras aldığımız sınıfın nesnesini atadık
	//Ana classtaki üyelere erişilir

	emp2 = &emp3;

	emp1->display();//Departman yazmaz
	emp2->display();
	mng.display();

	aralik();

	* //Downcasting
	//Downcasting pointerı miras alan sınıfın pointerı haline getirme
	Employe emp("nazli", "isler", 10000);
	Employe* emp2 = &emp;

	Manager* mng2 = (Manager*)(emp1);//emp1 manager işaretçisi yapıp atadım

	//Yönetici bir çalışandır ama her çalışan bir yönetici değil!!
	//Manager* mng3 = (Manager*)(emp2);

	//cout << mng3->mngDepartment << endl; her çalışan bir yönetici değildir

	emp1->display();
	mng2->display();



	//Virtual func
	Employe emp1("savas", "eratesli", 4500);
	Manager mng1("nazli", "isler", 4999, "software");

	cout << "Reference :" << endl;
	print(emp1);
	print(mng1);

	aralik();

	Employe* emp2 = new Employe("savas", "eratesli", 5600);
	Manager* mng2 = new Manager("nazlican", "isler", 6588, "software");

	cout << "Pointer :" << endl;
	print2(emp2);
	print2(mng2);

	aralik();

	cout << "Value :" << endl;
	print3(emp1);
	print3(mng1);


	//Nesne silmede virtual distructer kullanılır virtual ~

	Manager* mng = new Manager("savas", "eratesli", 5555, "software");
	Employe* emp = mng;
	Employe* emp2= new Manager("savas", "eratesli", 5555, "software");

	delete emp;
	delete emp2;
	//delete mng; virtual yapmazsak

	*/

	//Pure Virtual Func

	Dog* dogAnimal = new Dog();
	Cat* catAnimal = new Cat();
	Duck* duckAnimal = new Duck();

	Animal* animalObj[] = { dogAnimal,catAnimal,duckAnimal };
	for (int i = 0; i < 3; i++)
	{
		animalObj[i]->talk();
	}





	return 0;
}

