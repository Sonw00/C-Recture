#include<iostream>
using namespace std;

int main()
{
	int Kor_recode = 0;
	int Eng_recode = 0;
	int Math_recode = 0;

	cout << "���� ���� �Է�:" << endl;
	cin >> Kor_recode;
	cout << "���� ���� �Է�:" << endl;
	cin >> Eng_recode;
	cout << "���� ���� �Է�:" << endl;
	cin >> Math_recode;

	int Total = Kor_recode + Eng_recode + Math_recode;

	float Aver =Total/3.0f;

	cout << "���� ����:" << Kor_recode << endl;
	cout << "���� ����:" << Eng_recode << endl;
	cout << "���� ����:" << Math_recode << endl;
	cout << "���:" << Aver << endl;


	return 0;
}