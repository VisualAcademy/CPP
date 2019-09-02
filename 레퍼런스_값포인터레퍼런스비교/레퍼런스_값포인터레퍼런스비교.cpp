/*
������Ʈ�� : ���۷��������Ͱ���
�ҽ����ϸ� : ���۷��������Ͱ���.cpp
���� : (���۷���, ������, ��) Ÿ�� ��
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
	cout << "swapVal() ���� \n";
	cout << "[1] i = " << i << ", j = " << j << endl;
	swapVal(i, j);
	cout << "swapVal() ���� \n";
	cout << "[2] i = " << i << ", j = " << j << endl;

	i = 123, j = 456;
	cout << "swapPtr() ���� \n";
	cout << "[3] i = " << i << ", j = " << j << endl;
	swapPtr(&i, &j);
	cout << "swapPtr() ���� \n";
	cout << "[4] i = " << i << ", j = " << j << endl;

	i = 123, j = 456;
	cout << "swapRef() ���� \n";
	cout << "[5] i = " << i << ", j = " << j << endl;
	swapRef(i, j);
	cout << "swapRef() ���� \n";
	cout << "[6] i = " << i << ", j = " << j << endl;

	system("pause");
}
