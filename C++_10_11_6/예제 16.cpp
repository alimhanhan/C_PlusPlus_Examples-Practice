#include <iostream>
using namespace std;

class Circle      //Circle Ŭ���� ����
{
	int radius;

public:
	Circle();
	~Circle() {}

	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};    //Ŭ���� ���� �ÿ��� �������� ;(�����ݷ�) �����ؾ� ��

Circle::Circle()
{
	radius = 1;
}

int main()
{
	cout << "������ �� ���� = ";
	int n, radius;
	cin >> n;

	Circle* pArray = new Circle[n];

	for (int i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << ": ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;

	Circle* p = pArray;

	for (int i = 0; i < n; i++)
	{
		cout << p -> getArea() << ' ';

		if (p -> getArea() >= 100 && p -> getArea() <= 200)
		{
			count++;
		}

		p++;
	}

	cout << endl << "������ 100~200 ������ �� ���� = " << count << endl;

	delete[] pArray;
}