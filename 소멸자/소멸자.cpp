// �Ҹ���(Destructor) : ��ü�� ���� �� �Ҹ�� �� ����Ǵ� �޼���(�Լ�)
#include <iostream>
using std::cout;
using std::endl;
//[1] Car Ŭ���� ����
class Car {
private: // �׼��� ������(Access Modifier) : ���� ������
	//[3] �ʵ� : ��ǰ/����/����/ũ��/���� -> �Ӽ�(Property)
	char* _Color;
public:
	//[4] �޼���
	void GoGo(void) {
		cout << _Color << " ������ �ڵ����� �޸��ϴ�." << endl;
	}
	//[6] ������(Constructor) : �ʵ带 �ʱ�ȭ
	Car() { _Color = "Red"; }
	Car(char* Color) { _Color = Color; }
	//[7] �Ҹ��� 
	~Car() {
		cout << _Color << " ������ �ڵ����� �����˴ϴ�." << endl;
	}
};
//[1] ���� �Լ�
void main() {
	//[2] Car Ŭ������ �ν��Ͻ� ����
	Car car1; Car car2("Black"); // Car car3(1234);
	//[5] car ��ü�� ��� ȣ��
	car1.GoGo();	car2.GoGo();
}
