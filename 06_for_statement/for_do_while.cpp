#include<iostream>
using namespace std;
void main()
{
	// do ~while
	//int count = 3;
	//do {
	//	cout << "Hello Hyeon Woo" << endl;
	//} while (--count);

	/*
	* �Է��� ��(����)�� ��� ������ ��Ų��.
	* -1�� �Է��ϸ� ���� ���� �� ���
	*/
	//-----------------------------------------
	// for ��
	// ������ Ƚ�� �ȿ��� �ݺ��� �ϴ� �ݺ���
	/*
		for (�ʱ�ȭ; ����; ������) {
			������ ���϶� �ݺ�
		}
	*/
	//for (
	// int i = 0; 
	// i < 3; 
	// i++)
	//{
	//	cout << "Hello HeonWoo" << endl;
	//}
	// int i = 0;
	// for (; i < 3;) {
	// 	 cout << "Hello HeonWoo" << endl;
	// 	 i+=3;
	// }

	// 3. 2�� �ݺ���

	//while (3��)
	//{
	//	while (5��)
	//	{

	//	}
	//}

	//for (int y = 0;  y< 10; ++y)
	//{
	//	cout << endl;
	//	for (int x = 0; x < 10; x++)
	//	{
	//		cout << "(" << y << ", " << x << ") ";
	//	}
	//}

	for (int i = 2; i < 10; ++i)
	{
		cout << i << "��~~~~~" << endl;
		for (int j = 1; j < 10; ++j) {
			cout << i << "*" << j << "=" << i * j << endl;
		}
	}
}