// 피보나치 수열: 1 1 2 3 5 8 13 21 ...
#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	int b = 1;

	while (b <= 20)
	{
		cout << b << endl;
		int temp = a + b;
		a = b;
		b = temp;
	}

	system("pause");
	return 0;
}
