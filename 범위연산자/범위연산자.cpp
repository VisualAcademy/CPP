// ����(scope) ������ -> ::
// ���� : ���� ����
// ���� : Ŭ���� ����
#include <iostream>

int intNum = 123;	//��������

void main()
{
	int intNum = 321;//���ú���
	std::cout << intNum << std::endl;//321
	std::cout << ::intNum << std::endl;//123

	system("PAUSE");
}
