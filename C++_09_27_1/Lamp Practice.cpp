#include <iostream>
#include <string>
using namespace std;

class DeskLamp
{
private:
	bool isOn;

public:
	void turnOn();
	void turnOff();
	void print();
};

void DeskLamp::turnOn()
{
	isOn = true;
}

void DeskLamp::turnOff()
{
	isOn = false;
}

void DeskLamp::print()
{
	if (isOn == true)
		cout << "������ ����" << endl;
	else
		cout << "������ ����" << endl;
}

int main()
{
	DeskLamp lamp;

	lamp.turnOn();
	lamp.print();
	lamp.turnOff();
	lamp.print();
}