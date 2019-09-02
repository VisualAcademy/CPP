// while 문
#include <iostream>

using namespace std;

int main()
{
	int count = 0;						// 초기식
	while (count < 3)					// 조건식
	{
		cout << "안녕하세요." << endl;	// 실행문
		count++;						// 증감식
	}

	system("pause");
	return 0;
}
