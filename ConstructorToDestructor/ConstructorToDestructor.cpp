#include <iostream>

using namespace std;

class Test {
public:
	// 생성자
	Test() {
		cout << "[1] 생성" << endl;
	}
	// 메서드
	void Run() {
		cout << "[2] 실행" << endl;
	}
	// 소멸자
	~Test() {
		cout << "[3] 소멸" << endl;
	}
};

void main() {
	Test test{};
	test.Run();
}
