#include <iostream>
#include <string>

using namespace std;

int main()
{
	char signalLight = 'A';
	string message = "";

	switch (signalLight)
	{
	case 'R':
		message = "����: ���߼���.";
		break;
	case 'Y':
		message = "Ȯ��: �����ϼ���.";
		break;
	case 'G':
		message = "���: �̵��ϼ���.";
		break;
	default:
		message = "��ȣ�� ����";
		break;
	}

	cout << message << endl;

	system("pause");
	return 0;
}
