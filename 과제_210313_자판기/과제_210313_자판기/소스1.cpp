#include<iostream>
using namespace std;

int main()
{
	int accumulate = 0, input = 0;
	do
	{
		cout << "���� �Է�:";
		cin >> input;
		accumulate += input;
		system("cls");
	} while (input != -1);
		system("cls");
		cout << "���� ���� " << accumulate << "�Դϴ�." << endl;
	return 0;
}