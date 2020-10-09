#include <iostream>
#include <shape.hpp>

int main ()
{

	Rectangle rect;
	Triangle tri;
	rect.shape_data (10,25);
	tri.shape_data (15,45);
	cout <<"The area of the rectangle is: " << rect.area() << endl;
	cout << "The area of the triangle is: " << tri.area() << endl;
	return 0;
}