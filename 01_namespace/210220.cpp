#include <iostream> 
// for std::cout and std::endl // doPrint() �Լ��� ����
void doPrint() // doPrint �Լ��� �� �������� ȣ��� �Լ�(called function)
{
	std::cout << "In doPrint()" << std::endl;
} // main() �Լ��� ���� 
int main() {
	std::cout << "Starting main()" << std::endl;
	doPrint(); std::cout << "Ending main()" << std::endl; return 0;
}
	//doPrint() �Լ��� ȣ�������ν� main() �Լ��� ���ͷ�Ʈ �Ѵ�. ���⼭ main() �Լ��� ȣ����(caller) doPrint(); std::cout << "Ending main()" << std::endl; return 0; }
