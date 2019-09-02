#include <iostream>

int main()
{
	int i;
	std::cout << "i : _\b";
	std::cin >> i;
	std::cout <<
		"입력하신 i : " << i << "입니다." << std::endl;

	char c;
	std::cout << "c : _\b";
	std::cin >> c;
	std::cout <<
		"입력하신 c : " << c << "입니다." << std::endl;

	char s[50];
	std::cout << "s : __\b\b";
	std::cin >> s;
	std::cout <<
		"입력하신 s : " << s << "입니다." << std::endl;

	system("pause");
	return 0;
}
