#include <iostream>
using namespace std;

int calculate_cost(int cost)
{
	cost;// ����
	cost;// 1+1
	return cost;
}

void resut_order(const char* szItem, int cost)
{
	int _cost = calculate_cost(cost);
	cout << szItem << endl;
}

void main_1111()
{
	/*
	* switch ��
	*/
	//switch (����)
	//{
	//case ���:	// ���� ������ ���
	//			// �ش� ���̽����� �۵��� �ڵ�
	//	break;	// switch���� ����� �ڵ�
	//case ���:
	//	break;
	//default:
	//}

//	int iSelect = 0;
//
//	cout << "����: ";
//	cin >> iSelect;
//	switch (iSelect)
//	{
//	case 1: 
//	/*	
//	{
//		int cost = calculate_cost(1500);
//		cout << "�ݶ�" << endl;
//	}
//	*/	
//		resut_order("�ݶ�", 1500);
//		break;
//	case 2:
//		cout << "���̴�" << endl;
//		break;
//	default:
//		break;
//	}
	/*
	* goto��
	*/

	goto A;
A:
	cout << "A ����" << endl;
B:
	cout << "B ����" << endl;
C:
	cout << "C ����" << endl;
D:
	cout << "D ����" << endl;

}
