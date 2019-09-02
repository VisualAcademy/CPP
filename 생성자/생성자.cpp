// 생성자(Constructor) : 클래스의 필드를 초기화(객체생성시)
#include <iostream>

class Hi {
private:
	char* s;			// 필드(멤버변수)
public:
	void Hello(void) {	// 메서드(함수)
		//s = "안녕";
		std::cout << s << std::endl;
	}
	Hi() {	// 생성자 : 클래스 이름과 동일하고 반환값이 없는 메서드
		s = "안녕";
	}
	Hi(char* c) {
		s = c;	// 생성자 중복(오버로드)
	}
};
void main(void) {
	// Hi 클래스의 인스턴스 생성
	Hi objHi;// 생성자 호출
	// Hello 메서드 호출
	objHi.Hello();
	// Hi 클래스의 인스턴스 생성
	Hi hi("방가");
	// Hello 메서드 호출 : 매개변수가 있는 생성자 호출
	hi.Hello();
}
