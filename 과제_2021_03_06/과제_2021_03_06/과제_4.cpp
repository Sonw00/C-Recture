#include<iostream>
using namespace std;

int main()
{
	int Kor = 0;
	int Eng = 0;
	int Math = 0;
	cout << "����� ������ �Է��� �ּ���."<<endl;
	cout << "����:";
    cin >> Kor;
	cout << "����:";
	cin >> Eng;
	cout << "����:";
	cin >> Math;
	int Total = Kor+Eng+Math;
	float Aver = (float)Total/3;
	char Grade ='0';

	system("cls");

	if ((Aver >= 90.f) && (Aver <= 100.f))
		Grade = 'A';
	else if (Aver >= 80.f)
		Grade = 'B';
	else if (Aver >= 70.f)
		Grade = 'C';
	else if (Aver >= 60.f)
		Grade = 'D';
	else Grade = 'F';


	cout << "���� ����:" << Kor << endl;
	cout << "���� ����:" << Eng << endl;
	cout << "���� ����:" << Math << endl;
	cout << "����:" << Total << endl;
	cout << "���:" << Aver << endl;
	cout << "����:" << Grade << endl;
	return 0;
}