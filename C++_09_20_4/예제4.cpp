#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int speed;         //�ڵ����� �ӵ�
	int gear;         //�ڵ����� ���
	string color;        //�ڵ����� ����

	void speedUp();
	void speedDown();
};

void Car::speedUp()      /*�ӵ��� ������Ű�� ��� �Լ�*/
{
	speed += 10;
}

void Car::speedDown()      // �ӵ��� ���ҽ�Ű�� ��� �Լ�
{
	speed -= 10;
}

int main()
{
	Car myCar;

	myCar.speed = 100;
	myCar.gear = 3;
	myCar.color = "red";

	myCar.speedUp();
	cout << myCar.speed << endl;
	myCar.speedDown();
	cout << myCar.speed << endl;

	return 0;
}