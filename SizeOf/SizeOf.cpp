// sizeof 연산자로 데이터 형식의 크기 구하기 
#include <iostream>

using namespace std;

int main()
{
	cout << sizeof(int) << endl;		// 4
	cout << sizeof(long) << endl;		// 4
	cout << sizeof(float) << endl;		// 4
	cout << sizeof(double) << endl;		// 8
	cout << sizeof(char) << endl;		// 1

	system("pause");
	return 0;
}
