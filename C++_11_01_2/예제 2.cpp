#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> sv;		//���ڿ� ���� ����
	string name;

	cout << "�̸� 5���� �Է��Ͻÿ� : " << endl;

	for (int i = 0; i < 5; i++)		//�� �ٿ� �ϳ��� 5�� �Է¹ޱ�
	{
		cout << i + 1 << " --> ";
		getline(cin, name);
		sv.push_back(name);		//sv ������ �������� name�� �߰�
	}

	name = sv.at(0);		//������ ù ��° ����

	for (int i = 1; i < sv.size(); i++)
	{
		if (name < sv[i])		//���� sv[i]�� ���ڿ��� name���� ������ �ڿ� ��ġ�� ���
		{
			name = sv[i];		//name�� sv[i]�� ���ڿ��� ����
		}
	}

	cout << "�������� ���� �ڿ� ��ġ�� �̸��� " << name << "�Դϴ�." << endl;
}