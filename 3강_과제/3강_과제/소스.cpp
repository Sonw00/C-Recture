#include<iostream>
using namespace std;

int main()
{
	int Kor_recode = 0;
	int Eng_recode = 0;
	int Math_recode = 0;
	int total_score = 0;

	cout << "���� ���� �Է�: ";
	cin >> Kor_recode;
	
	cout << "���� ���� �Է�: "; 
	cin >> Eng_recode;
	
	cout << "���� ���� �Է�: "; 
	cin >> Math_recode;
	
	total_score = Kor_recode + Eng_recode + Math_recode;
	float Aver = (float)total_score /3;

	cout << "##### Result #####" << endl; 
	cout << "���� ����:" << Kor_recode << endl;
	cout << "���� ����:" << Eng_recode << endl;
	cout << "���� ����:" << Math_recode << endl;
	cout << "����:" << total_score << endl;
	cout << "���:" << Aver << endl;
	cout << "##################" << endl;
	return 0;
}