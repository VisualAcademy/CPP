#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
	cout << sizeof(int) << " bytes \n";

	int n{}; // 0���� �ʱ�ȭ
	cout << n << endl;


	auto a{ 64 }; // �ڵ����� ������ ������(int ����)
	cout << a << endl;


	int num{};
	cin >> num;

	cout << num << endl;


	cout << "sfdsfsdf" << (num + num) << '\n';


	double PI{};

	cout << "PI �Է�: ";

	cin >> PI;

	cout << '\n' << PI << endl;

	// true�� false ���
	cout << boolalpha;
	cout << (1 == 1) << endl;
	cout << (1 != 1) << endl;


	// char
	char letter{ 'A' };
	cout << letter << endl;

	// string
	string s{};
	string name{ "�ȳ��ϼ���." };
	cout << name << endl;

	string str1{ "C++" };
	string str2{ "C#" };
	string str3 = str1 + str2;
	cout << str3 << "," << str3.length() << endl;

	//////////////////////// �׸� 

	cout << "�޽��� �Է�: " << endl;
	string str4{};
	cin >> str4;
	//getline(cin, str4);
	string flowerLine(str4.length() + 4, '*');

	cout << '\n';
	cout << flowerLine << '\n';
	cout << "* " << str4 << " *\n";
	cout << flowerLine << '\n';

	// 

	//random_device seed{};

	//mt19937 engine{ seed() };

	//uniform_int_distribution<> dis{ 1, 10 };

	//int rnd1{ dis(engine) };
	//int rnd2{ dis(engine) };


	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	return 0;
}
