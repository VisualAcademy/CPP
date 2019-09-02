#include <iostream>

void main()
{
	//[1] 일반 변수
	int a = 10;
	//[2] 포인터 변수
	int* p; p = &a;
	//[3] 레퍼런스 변수 : 별칭
	int& r = a;

	std::cout << "a : " << a << std::endl;
	std::cout << "p : " << *p << std::endl;
	std::cout << "r : " << r << std::endl;

	system("PAUSE");
}
