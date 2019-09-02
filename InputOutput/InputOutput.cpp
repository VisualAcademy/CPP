#include <iostream>
#include <string>

int main()
{
	std::cout << "출력문과 입력문: " << std::endl;

	// 문자열 변수
	std::string name;

	// 입력문: cin
	std::cin >> name;

	// 출력문: cout
	std::cout << "당신의 이름은 " << name << "입니다." << std::endl;

	system("pause");
	return 0;
}
