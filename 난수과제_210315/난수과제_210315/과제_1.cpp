#include<iostream>
using namespace std;

int main()
{   
	for (int i=0;i<3;i++)
	{
		int Ran_Num = rand() % 10;
		cout << "===================Menu=================" << endl;
		cout << "1.Ȧ 2.¦ 3.��������" << endl;
		cout << "������ �ּ���:";
		int select = 0;
		cin >> select;
		system("cls");
		switch (select)
		{
		 case 1:
		 {
			 if (Ran_Num % 2 == 0)
			 {
				 cout << "Ʋ�Ƚ��ϴ�! ������ " << Ran_Num << "�Դϴ�." << endl;
				 system("pause");
				 system("cls");
			 }
			 else
			 {
				 cout << "�����Դϴ�! ������ " << Ran_Num << "�Դϴ�!" << endl;
				 system("pause");
				 system("cls");
			 }
			 break;
		 }
	     case 2:
		 {
			 if (Ran_Num % 2 == 0)
			 {
				 cout << "�����Դϴ�! ������ " << Ran_Num << "�Դϴ�!" << endl;
				 system("pause");
				 system("cls");
			 }
			 else
			 {
				 cout << "Ʋ�Ƚ��ϴ�! ������ " << Ran_Num << "�Դϴ�." << endl;
				 system("pause");
				 system("cls");
			 }
			 break;
		 }
		 case 3:
		 {
			 cout << "������ ���� �ϰڽ��ϴ�." << endl;
			 system("pause");
			 system("cls");
			 break;

		 }
		 default:
		 {
			 cout << "���� ���� �����Դϴ�." << endl;
			 system("pause");
			 system("cls");
			 break;
		 }

		}
	}
	return 0;
}