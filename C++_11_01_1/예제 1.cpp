#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;		//������ ���� ������ ����

	v.push_back(1);		// v[0]=1
	v.push_back(2);		// v[1]=2
	v.push_back(3);		// v[2]=3

	for (int i = 0; i < v.size(); i++)		//���� �� ������ ��� ���� ���  -->  1 2 3 ���
	{
		cout << v[i] << " ";		//v[i]�� ������ i��° ����
	}

	cout << endl;

	v[0] = 10;		//������ ù ��° ���Ҹ� 10���� ����
	
	int n = v[2];		//���� n�� 3����
	v.at(2) = 5;		//v[2]=3 �̿�����, v[2]=5 �� ����
						// �� �ڵ�� v[2]=5 �ε� �ۼ� ���� 

	for (int i = 0; i < v.size(); i++)	//���� �� ������ ��� ���� ���  -->  10 2 5 ���
	{
		cout << v[i] << " ";		//v[i]�� ������ i��° ����
	}

	cout << endl;

}