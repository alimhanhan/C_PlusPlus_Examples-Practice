#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;

	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle()
{
	radius = 1;
	cout << "������" << radius << "�� ����" << endl;
}

Circle::Circle(int r)
{
	radius = r;
	cout <<"������"<<"�� ����" << endl;
}

Circle::Circle()
{
	cout << "������" << "�� ����" << endl;
}

double Circle::getArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle dounut;
	Circle pizza(30);

	return 0;
}