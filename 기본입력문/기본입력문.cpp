#include <iostream>

int main()
{
	int i;
	std::cout << "i : _\b";
	std::cin >> i;
	std::cout <<
		"�Է��Ͻ� i : " << i << "�Դϴ�." << std::endl;

	char c;
	std::cout << "c : _\b";
	std::cin >> c;
	std::cout <<
		"�Է��Ͻ� c : " << c << "�Դϴ�." << std::endl;

	char s[50];
	std::cout << "s : __\b\b";
	std::cin >> s;
	std::cout <<
		"�Է��Ͻ� s : " << s << "�Դϴ�." << std::endl;

	system("pause");
	return 0;
}
