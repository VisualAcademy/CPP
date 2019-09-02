// this : 자기 참조 포인터 : 자기 자신의 클래스의 인스턴스를 나타냄...
#include <iostream>

using std::cout;
using std::endl;

class Car
{
private:
	char* color; // 필드 color
public:
	Car(char* color) // 매개변수 color
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
