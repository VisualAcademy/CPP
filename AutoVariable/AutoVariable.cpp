#include <iostream>
#include <string>

int main()
{
	// 변수(Variable) 선언: auto 키워드로 선언된 변수는 자동 추정됨
	auto num = 1234; // int
	auto dec = 12.34; // double
	auto c = 'A'; // char
	auto s = "Hello"; // char *s => string
	auto b = true; // bool 

	// 숫자 구분자(Numeric/Digit Separator)
	auto numericSeparator = 1'000'000;
	std::cout << numericSeparator << std::endl;

	// 진법 표현
	auto binary = 0b1111; // 15
	auto hex = 0xFF; // 255

	std::cout << binary << std::endl;
	std::cout << hex << std::endl;

	system("pause");
	return 0;
}
