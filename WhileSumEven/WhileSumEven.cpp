#include <iostream>

using namespace std;

int main()
{
	// 2 + 4 + 6 + ... + 100
	int sum = 0;
	int i = 2;						// �ʱ��

	while (i <= 100)				// ���ǽ�
	{
		sum = sum + i;				// ���๮
		i = i + 2; // 2�� ����		// ������
	}

	cout << "2�� ����� ��: " << sum << endl;

	system("pause");
	return 0;
}
