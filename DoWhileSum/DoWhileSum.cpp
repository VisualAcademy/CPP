#include <iostream>

using namespace std;

int main()
{
	// do~while ���� ����Ͽ� 1���� 5������ ��
	int sum = 0;
	int i = 1;					// �ʱ��
	do
	{
		sum += i;				// ���๮
		i++;					// ������
	} while (i <= 5);			// ���ǽ�
	cout << sum << endl; // 15

	system("pause");
	return 0;
}
