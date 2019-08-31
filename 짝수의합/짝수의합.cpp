#include <iostream>

void main(void)
{
	//[1] Input
	int intSum = 0;
	//[2] Process
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			intSum += i;
		}
	}
	//[3] Output
	std::cout <<
		"1부터 100까지 짝수의 합 : "
		<< intSum << "입니다." << std::endl;

	system("pause");
}
