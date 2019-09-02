// 소멸자(Destructor) : 객체가 생성 후 소멸될 때 실행되는 메서드(함수)
#include <iostream>
using std::cout;
using std::endl;
//[1] Car 클래스 선언
class Car {
private: // 액세스 한정자(Access Modifier) : 접근 수식자
	//[3] 필드 : 부품/성질/색상/크기/성격 -> 속성(Property)
	char* _Color;
public:
	//[4] 메서드
	void GoGo(void) {
		cout << _Color << " 색상의 자동차가 달립니다." << endl;
	}
	//[6] 생성자(Constructor) : 필드를 초기화
	Car() { _Color = "Red"; }
	Car(char* Color) { _Color = Color; }
	//[7] 소멸자 
	~Car() {
		cout << _Color << " 색상의 자동차가 폐차됩니다." << endl;
	}
};
//[1] 메인 함수
void main() {
	//[2] Car 클래스의 인스턴스 생성
	Car car1; Car car2("Black"); // Car car3(1234);
	//[5] car 객체의 멤버 호출
	car1.GoGo();	car2.GoGo();
}
