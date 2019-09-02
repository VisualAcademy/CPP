#include <iostream>

using namespace std;

// max 함수: 두 수 중에서 큰 수를 반환하는 함수
int max(int x, int y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << max(3, 5) << endl; // 5
	cout << max(-3, -5) << endl; // -3
	system("pause");
	return 0;
}
