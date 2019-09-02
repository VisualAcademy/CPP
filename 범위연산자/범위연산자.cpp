// 범위(scope) 연산자 -> ::
// 단항 : 전역 범위
// 이항 : 클래스 범위
#include <iostream>

int intNum = 123;	//전역변수

void main()
{
	int intNum = 321;//로컬변수
	std::cout << intNum << std::endl;//321
	std::cout << ::intNum << std::endl;//123

	system("PAUSE");
}
