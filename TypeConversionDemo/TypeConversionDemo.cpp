#include <iostream>

int main()
{
	double d = 12.34;

	// static_cast<T> => static_cast of T 
	int i = static_cast<int>(d);

	std::cout << i << std::endl;

	system("PAUSE");
	return 0;
}
