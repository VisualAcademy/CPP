#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	while (true)
	{
		cout << ++number << endl;

		if (number >= 5)
		{
			break; // break ���� ���ؼ� while �� ���� ������ 
		}
	}

	system("pause");
	return 0;
}
