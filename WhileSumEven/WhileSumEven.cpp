#include <iostream>

using namespace std;

int main()
{
	// 2 + 4 + 6 + ... + 100
	int sum = 0;
	int i = 2;						// 초기식

	while (i <= 100)				// 조건식
	{
		sum = sum + i;				// 실행문
		i = i + 2; // 2씩 증가		// 증감식
	}

	cout << "2의 배수의 합: " << sum << endl;

	system("pause");
	return 0;
}
