#include<iostream>
using namespace std;

int main()
{
	int tie = 0, win = 0, defeat = 0;
	for (int i = 0; i < 3; i++)
	 {
		int R_Num = rand() % 3;
		cout << "==================���������� ����=====================" << endl;
		cout << "=========================Menu=========================" << endl;
		cout << "1.����  2.����  3.��  4.��������" << endl;
		int select = 0;
		cout << "���� �ϼ���:";
		cin >> select;
		system("cls");
	  switch (select)
	  {
		case 1:
		{
			if (R_Num == 0)
			{
				cout << "�����ϴ�!" << endl;
				tie += 1;
				system("pause");
				system("cls");
			}
			else if (R_Num == 1)
			{
				cout << "�����ϴ�!" << endl;
				defeat += 1;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "�̰���ϴ�!" << endl;
				win += 1;
				system("pause");
				system("cls");
			}
			break;
		}

		case 2:
		{
			if (R_Num == 0)
		    {
			    cout << "�̰���ϴ�!" << endl;
			    win += 1;
				system("pause");
				system("cls");
		    }
		    else if (R_Num == 1)
		    {
			    cout << "�����ϴ�!" << endl;
			    tie += 1;
				system("pause");
				system("cls");
		    }
		    else
		    {
			    cout << "�����ϴ�!" << endl;
			    defeat += 1;
				system("pause");
				system("cls");
		    }
		break;
		}
		case 3:
		{
			if (R_Num == 0)
			{
				cout << "�����ϴ�!" << endl;
				defeat += 1;
				system("pause");
				system("cls");
			}
			else if (R_Num == 1)
			{
				cout << "�̰���ϴ�!" << endl;
				win += 1;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "�����ϴ�!" << endl;
				tie += 1;
				system("pause");
				system("cls");
			}
			break;
		}
		case 4:
		{
			cout << "������ �����մϴ�." << endl;
			system("pause");
			system("cls");
			i = 4;
		}
	
	   }
	}
		cout << "����� ������ " << win << "�� " << defeat << "�� " << tie << "�� �Դϴ�." << endl;
		system("pause");
		system("cls");
	return 0;
}