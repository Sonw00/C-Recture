#include<iostream>
using namespace std;

int main()
{
	int Num_1 = 0;
	int Num_2 = 0;

	cin >> Num_1;
    cin >> Num_2;

	int Differ = Num_1 - Num_2;

	if (Differ >= 0)
	{
		cout << Differ;
	}
	else
	{
		cout << Differ * (-1);
	}

	return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
	int Num_1 = 0, Num_2 = 0;

	cout << "���� �Է�: ";
	cin >> Num_1;
	cout << "���� �Է�: "; 
	cin >> Num_2;

	if (Num_1 > Num_2)
	{
		cout <<"���� ��: "<< Num_1 - Num_2;
	}
	else
	{
		cout << "���� ��: " << Num_2 - Num_1;
	}

	return 0;
}
*/