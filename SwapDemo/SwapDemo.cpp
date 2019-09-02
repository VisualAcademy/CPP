#include <iostream>

using namespace std;

using std::cout;

void Swap(int& f, int& s)
{
	int temp{ f };
	f = s;
	s = temp;
}

int main()
{
	int num1{ 3 };
	int num2{ 5 };

	Swap(num1, num2);

	cout << num1 << ", " << num2 << endl;

	return 0;
}
