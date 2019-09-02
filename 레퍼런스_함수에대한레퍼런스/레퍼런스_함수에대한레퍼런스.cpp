#include <iostream>

int Max(int i, int j)
{
	return (i > j) ? i : j;
}

void main()
{
	int a = 123; int b = 456;

	int c = Max(a, b);

	int(&r)(int, int) = Max;

	std::cout << "Max(123,456) : " << c << std::endl;
	std::cout << "r(123,456) : " << r(a, b) << std::endl;

	system("pause");
}
