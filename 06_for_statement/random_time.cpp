#include<iostream>
#include<ctime>
using namespace std;


void main() {
	// ����
	//int a = rand() % 10;
	//int b = rand();
	//int c = rand();

	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;

	// time
	// 1970�� 1��1�Ϻ��� ������� �귯�� �ð��� �ʴ����� ȯ���ؼ� ��ȯ���ִ� �Լ�.
	// <ctime> ������� �����Ѵ�.
	// int _time = time(nullptr);
	// cout << _time << endl;

	int iSize = 0;

	cout << "�Է�: ";
	cin >> iSize;


	// 4.
	for (int i = 0; i < iSize; ++i)
	{
		for (int j = 0; j < i; ++j)
			cout << ' ';
		for (int j = 0; j < iSize - i; ++j)
			cout << '*';
		cout << endl;
	}

	cout << "----------------------------------" << endl;

	// 3.
	for (int i = iSize; i > 0; --i)
	{
		for (int j = 0; j < i - 1; ++j)
			cout << ' ';
		for (int j = 0; j < (iSize + 1) - i; ++j)
			cout << '*';

		cout << endl;
	}

	cout << "----------------------------------" << endl;

	//// 2.
	for (int i = iSize; i > 0; --i)
	{
		for (int j = 0; j < i; ++j)
			cout << '*';
		cout << endl;
	}

	cout << "----------------------------------" << endl;

	//// 1.
	for (int i = 0; i < iSize; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
			cout << '*';
		cout << endl;
	}
}