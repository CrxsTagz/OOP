#include <iostream>


using namespace std;

class mother{
public:
	void display ()
	{
		cout << "mother: display function\n";
	}
};

class daughter : public mother{
public:
	void display ()
	{
		cout << "daughter: display function\n\n";
	}
};
