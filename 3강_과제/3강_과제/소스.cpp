#include<iostream>
using namespace std;

int main()
{
	int Kor_recode = 0;
	int Eng_recode = 0;
	int Math_recode = 0;

	cin >> Kor_recode;
	cin >> Eng_recode;
	cin >> Math_recode;

	float Aver = (Kor_recode+Eng_recode+Math_recode)/3.0f;

	cout << "���� ����:" << Kor_recode << endl;
	cout << "���� ����:" << Eng_recode << endl;
	cout << "���� ����:" << Math_recode << endl;
	cout << "���:" << Aver << endl;


	return 0;
}