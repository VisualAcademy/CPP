#include <iostream>

void main()
{
	//[1] �Ϲ� ����
	int a = 10;
	//[2] ������ ����
	int* p; p = &a;
	//[3] ���۷��� ���� : ��Ī
	int& r = a;

	std::cout << "a : " << a << std::endl;
	std::cout << "p : " << *p << std::endl;
	std::cout << "r : " << r << std::endl;

	system("PAUSE");
}
