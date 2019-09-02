#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
	cout << sizeof(int) << " bytes \n";

	int n{}; // 0으로 초기화
	cout << n << endl;


	auto a{ 64 }; // 자동으로 변수를 선언함(int 유추)
	cout << a << endl;


	int num{};
	cin >> num;

	cout << num << endl;


	cout << "sfdsfsdf" << (num + num) << '\n';


	double PI{};

	cout << "PI 입력: ";

	cin >> PI;

	cout << '\n' << PI << endl;

	// true와 false 출력
	cout << boolalpha;
	cout << (1 == 1) << endl;
	cout << (1 != 1) << endl;


	// char
	char letter{ 'A' };
	cout << letter << endl;

	// string
	string s{};
	string name{ "안녕하세요." };
	cout << name << endl;

	string str1{ "C++" };
	string str2{ "C#" };
	string str3 = str1 + str2;
	cout << str3 << "," << str3.length() << endl;

	//////////////////////// 네모 

	cout << "메시지 입력: " << endl;
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
