// ������(Constructor) : Ŭ������ �ʵ带 �ʱ�ȭ(��ü������)
#include <iostream>

class Hi {
private:
	char* s;			// �ʵ�(�������)
public:
	void Hello(void) {	// �޼���(�Լ�)
		//s = "�ȳ�";
		std::cout << s << std::endl;
	}
	Hi() {	// ������ : Ŭ���� �̸��� �����ϰ� ��ȯ���� ���� �޼���
		s = "�ȳ�";
	}
	Hi(char* c) {
		s = c;	// ������ �ߺ�(�����ε�)
	}
};
void main(void) {
	// Hi Ŭ������ �ν��Ͻ� ����
	Hi objHi;// ������ ȣ��
	// Hello �޼��� ȣ��
	objHi.Hello();
	// Hi Ŭ������ �ν��Ͻ� ����
	Hi hi("�氡");
	// Hello �޼��� ȣ�� : �Ű������� �ִ� ������ ȣ��
	hi.Hello();
}
