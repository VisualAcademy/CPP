#include <iostream>

using namespace std;

int main()
{
	char c;

	cout << "문자 입력: " << endl;
	cin >> c;

	if (c >= 'A' && c <= 'Z')
	{
		cout << c << "는 대문자입니다." << endl;
	}
	else
	{
		cout << c << "는 소문자입니다." << endl;
	}

	system("pause");
	return 0;
}
