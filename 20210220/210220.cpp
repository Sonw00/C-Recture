/*
0. #: ��ó�� ������
1. #include �ڿ� ������ ���ϵ��� �� ������Ʈ�� ������ ��Ű�ڴ�.
2. <>: C++ �������� ǥ������ �����ϴ� ������� ������ .cpp(x) .h
3. "": ���¼ҽ��� �������ų� ����ڰ� �ۼ��� .h

ps) .h�� ����� .cpp ���Ǻ�
*/
#include<iostream>
using namespace std;
/*
* using: ������
* namespace: ����
*/
namespace HyunWoo {
	void i_am(){
		cout << "i am hw" << std::endl;
		//'\n' ����(�ٹٲ�), '\t' ��ĭ ��� 
	}
}
namespace Shalom {
	void i_am() {
		cout << "i am Sh" << endl;
		cout << 'i' << endl;
	}
}
using namespace HyunWoo;
using namespace Shalom;

int main()
{
	HyunWoo::i_am();
	Shalom::i_am();
}