#include <iostream>
#include <string>
#include <animal.hpp>


int main ()
{
	Zebra zeb;
	Dolphin dol;
	char n1[10]="Ana";
	char n2[10]="Jin";

	zeb.set_data (5,n1);
	dol.set_data (2,n2);

	zeb.message_zebra() ;
	dol.message_dolphin() ;

	return 0;
}