#include <iostream>

using namespace std;

int main()
{
	char c;

	cout << "���� �Է�: " << endl;
	cin >> c;

	if (c >= 'A' && c <= 'Z')
	{
		cout << c << "�� �빮���Դϴ�." << endl;
	}
	else
	{
		cout << c << "�� �ҹ����Դϴ�." << endl;
	}

	system("pause");
	return 0;
}
