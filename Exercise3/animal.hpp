#include <iostream>
#include <cstring>

using namespace std;

class Animal
{
	protected:
	 int age;char name[10];
	public:
	 void set_data (int a, char n[10])
	 {
		age = a;
		strcpy(n,name);
	 }

};

class Zebra:public Animal
{public:

void message_zebra()
{cout<< "The zebra named "<< name<<" is "<< age << "years old. The zebra comes from Guachupita. \n";}
};

class Dolphin: public Animal
{public:

void message_dolphin()
{cout<< "The dolphin named "<< name<< " is "<<age << "years old. The dolphin comes from Guaricano.\n";}
};

