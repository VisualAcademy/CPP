#include <iostream>

//[3] 상수 : 매크로 상수
#define PI 3.141592654

void main(void)
{
	//[1] 변수(Variable)
	int i = 10;

	//[2] 상수(Constant)
	const int AA = 100;

	std::cout << "AA : " << AA << std::endl;

	//[3] 전처리기 지시문 내용 출력
	std::cout << "PI : " << PI << std::endl;

	system("pause");
}
