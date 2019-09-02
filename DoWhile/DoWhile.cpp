// do while 문: 선행 반복
#include <iostream>

using namespace std;

int main()
{
	int count = 0;	// 초기식
	do
	{
		cout << "안녕하세요." << endl; // 실행문
		count++; // 증감식
	} while (count < 3); // 조건식

	system("pause");
	return 0;
}
