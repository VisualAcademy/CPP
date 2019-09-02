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
			break; // break 문을 통해서 while 문 빠져 나오기 
		}
	}

	system("pause");
	return 0;
}
