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
		message = "적색: 멈추세요.";
		break;
	case 'Y':
		message = "확색: 주의하세요.";
		break;
	case 'G':
		message = "녹색: 이동하세요.";
		break;
	default:
		message = "신호등 고장";
		break;
	}

	cout << message << endl;

	system("pause");
	return 0;
}
