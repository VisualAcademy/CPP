#include <iostream>

using namespace std;

int main()
{
	// do~while 문을 사용하여 1부터 5까지의 합
	int sum = 0;
	int i = 1;					// 초기식
	do
	{
		sum += i;				// 실행문
		i++;					// 증감식
	} while (i <= 5);			// 조건식
	cout << sum << endl; // 15

	system("pause");
	return 0;
}
