#include <iostream>
using namespace std;

#include "���� 14_Calculatorr.h"
#include "���� 14_Adder.h"

void Calculator::run()
{
	cout << "�� ���� �Է��Ͻÿ�: >>";
	int a, b;

	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}