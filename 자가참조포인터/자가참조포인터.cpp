// this : �ڱ� ���� ������ : �ڱ� �ڽ��� Ŭ������ �ν��Ͻ��� ��Ÿ��...
#include <iostream>

using std::cout;
using std::endl;

class Car
{
private:
	char* color; // �ʵ� color
public:
	Car(char* color) // �Ű����� color
	{
		this->color = color;
	}
	void Print()
	{
		cout << color << "(" << this->color << ")" << endl;
	}
};

void main()
{
	Car c("Red");
	c.Print();
}
