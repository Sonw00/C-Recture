#include<iostream>
using namespace std;

int main()
{
	cout << "====================================" << endl;
	cout << "===============���Ǳ�===============" << endl;
	cout << "====================================" << endl;
	cout << "�������� �Է��� �ּ���:";
	int Money = 0;
	cin >> Money;
	if (Money <= 100)
	{
		cout << "100���� �����ž� ���Ḧ �� �� �־��." << endl;
	}
	else
	{
		cout << "==================================" << endl;
		cout << "===============�޴�===============" << endl;
		cout << "==================================" << endl;
		cout << "1.�ݶ�(100��)" << endl;
		cout << "2.���̴�(200��)" << endl;
		cout << "3.ȯŸ(300��)" << endl;
		cout << "4.�ܵ���ȯ" << endl;

		int choice = 0;
		while (Money >= 100)
		{
			cout << "�޴��� ������ �ּ���:";
			cin >> choice;
			switch (choice)
			{
				
			 case 1:
			  {
				 
				 cout << "�ݶ� ���� �ϼ̳׿�." << endl;
				 
				 if (Money < 100)
				 {
					 cout << "�ܵ��� �����մϴ�." << endl;
					 cout << "���糲�� �ܵ���" << Money << "�� �Դϴ�." << endl;
				 }
				 else
				 {
					 Money -= 100;
				     cout << "���糲�� �ܵ���" << Money << "�� �Դϴ�." << endl;
				 }
				 break;
			  }
			 case 2:
			  {
				 
				 cout << "���̴ٸ� ���� �ϼ̳׿�." << endl;
				 if (Money < 200)
				 {
					 cout << "�ܵ��� �����մϴ�." << endl;
					 cout << "���糲�� �ܵ���" << Money << "�� �Դϴ�." << endl;
				 }

				 else
				 {
					 Money -= 200;
					 cout << "���糲�� �ܵ���" << Money << "�� �Դϴ�." << endl;
				 }
				 break;
			  }
			 case 3:
			  {
				 
				 cout << "ȯŸ�� ���� �ϼ̳׿�." << endl;
				 
				 if (Money < 300)
				 {
					 cout << "�ܵ��� �����մϴ�." << endl;
					 cout << "���糲�� �ܵ���" << Money << "�� �Դϴ�." << endl;
				 }
				 else
				 {
					 Money -= 300;
					 cout << "���糲�� �ܵ���" << Money << "�� �Դϴ�." << endl;
				 }
				 break;
			  }
			 case 4:
			  {
				 cout << "�ܵ���" << Money << "�� ��ŭ �����̽��ϴ�." << endl;
				 cout << "�ܵ� ��ȯ�� �帮�ڽ��ϴ�." << endl;
				 break;
			  }
			 default:
			  {
				 cout << "�׷� �޴��� �����ϴ�. �ٽ� ������ �ּ���." << endl;
                 break;
			  }
			}
		}
	}
	return 0;
}