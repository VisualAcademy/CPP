#include <iostream>
#include <string>

int main()
{
	// ����(Variable) ����: auto Ű����� ����� ������ �ڵ� ������
	auto num = 1234; // int
	auto dec = 12.34; // double
	auto c = 'A'; // char
	auto s = "Hello"; // char *s => string
	auto b = true; // bool 

	// ���� ������(Numeric/Digit Separator)
	auto numericSeparator = 1'000'000;
	std::cout << numericSeparator << std::endl;

	// ���� ǥ��
	auto binary = 0b1111; // 15
	auto hex = 0xFF; // 255

	std::cout << binary << std::endl;
	std::cout << hex << std::endl;

	system("pause");
	return 0;
}
