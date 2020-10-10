#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
	//protected means that the code can access anywhere
	protected:
	 int age; char name[20];
	public:
	 void andata (int a, char n[20])
	 {
		age = a;
	//strcpy copia un string2 en un string1
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

