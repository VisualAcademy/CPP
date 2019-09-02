#include <iostream>

using namespace std;

int main()
{
	// 단문
	if (1 == 1) cout << "단문 1" << endl;
	if (1 == 1)
		cout << "단문 2" << endl;
	if (1 == 1)
	{
		cout << "단문 3" << endl;
	}

	// 복문
	if (1 == 1)
	{
		cout << "복문 a" << endl;
		cout << "복문 b" << endl;
	}

	system("pause");
	return 0;
}
