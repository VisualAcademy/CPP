// 입력된 수가 7이면 1을 그렇지 않으면 -1을 출력하는 프로그램
#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	cin >> number;

	int result = (number == 7) ? 1 : -1;

	cout << result << endl;

	system("pause");

	return 0;
}
