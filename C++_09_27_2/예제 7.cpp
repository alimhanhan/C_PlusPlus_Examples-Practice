#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() : Circle(1) {}

Circle::Circle(int r)
{
	radius = r;

	cout << "������" << radius << "�� ����" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}