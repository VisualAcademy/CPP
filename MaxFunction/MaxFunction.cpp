#include <iostream>

using namespace std;

// max �Լ�: �� �� �߿��� ū ���� ��ȯ�ϴ� �Լ�
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
