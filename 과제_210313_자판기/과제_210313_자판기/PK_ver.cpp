#include<iostream>
using namespace std;

void main()
{
	const int coke = 100, cidar = 200, fanta = 300;//������ �ٲ��� ���� ���̹Ƿ�
	int money = 0, select =0;
	bool is_run = true;
	cout << "�ݾ� �Է�: ";
	cin >> money;

	while (is_run)
	{
		system("cls");
		cout << "���� �ݾ�" << money << endl;
		cout << "------------------------Menu------------------------" << endl;
		cout << "1.�ݶ�(100��) 2.���̴�(200��) 3.ȯŸ(300��) 4.�ܵ���ȯ" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "����: ";
		cin >> select;

		switch (select)
		{
		case 1:
			if (money >= coke)
			{
				money -= coke;
				cout << "�ݶ� ���� �Ϸ�!" << endl;
			}
			else {
				cout << "�ݾ� ����: " << money << endl;
				is_run = false;
			}
			break;
		case 2:
			if (money >= cidar)
			{
				money -= cidar;
				cout << "���̴� ���� �Ϸ�!" << endl;
			}
			else { 
				cout << "�ݾ� ����: " << money << endl; 
				is_run = false;
			}
		break;
		case 3:
			if (money >= fanta)
			{
				money -= fanta;
				cout << "ȯŸ ���� �Ϸ�!" << endl;
			}
			else {
				cout << "�ݾ� ����: " << money << endl;
				is_run = false;
			}
			break;
		case 4:
			cout << "���� �Ž�����: " << money << endl;
			is_run = false;
		default:
			break;
		}
		system("pause");
	}
}