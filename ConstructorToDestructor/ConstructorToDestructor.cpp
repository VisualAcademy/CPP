#include <iostream>

using namespace std;

class Test {
public:
	// ������
	Test() {
		cout << "[1] ����" << endl;
	}
	// �޼���
	void Run() {
		cout << "[2] ����" << endl;
	}
	// �Ҹ���
	~Test() {
		cout << "[3] �Ҹ�" << endl;
	}
};

void main() {
	Test test{};
	test.Run();
}
