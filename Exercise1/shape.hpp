#include <iostream>

using namespace std;

class Shape
{
protected:
	float width, height;
public:
	void shape_data (float rtw, float rth)
	{
		width = rtw;
		height = rth;
	}
};

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (width * height);
	}
};

class Triangle: public Shape
{
public:
	float area ()
	{
		return (width * height / 2);
	}
};
