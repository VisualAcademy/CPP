/*
프로젝트명 : 레퍼런스포인터값비교
소스파일명 : 레퍼런스포인터값비교.cpp
내용 : (레퍼런스, 포인터, 값) 타입 비교
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void swapVal(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}

void swapPtr(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void swapRef(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

void main()
{
	int i, j;
	i = 123, j = 456;
	cout << "swapVal() 이전 \n";
	cout << "[1] i = " << i << ", j = " << j << endl;
	swapVal(i, j);
	cout << "swapVal() 이후 \n";
	cout << "[2] i = " << i << ", j = " << j << endl;

	i = 123, j = 456;
	cout << "swapPtr() 이전 \n";
	cout << "[3] i = " << i << ", j = " << j << endl;
	swapPtr(&i, &j);
	cout << "swapPtr() 이후 \n";
	cout << "[4] i = " << i << ", j = " << j << endl;

	i = 123, j = 456;
	cout << "swapRef() 이전 \n";
	cout << "[5] i = " << i << ", j = " << j << endl;
	swapRef(i, j);
	cout << "swapRef() 이후 \n";
	cout << "[6] i = " << i << ", j = " << j << endl;

	system("pause");
}
