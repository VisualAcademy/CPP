#include <iostream>
#include <typeinfo>

using namespace std;

int main(void)
{
    auto num1 = 1234;
    auto num2 = 3.14;

    cout << num1 << endl;
    cout << typeid(num1).name() << endl;
    cout << num2 << endl;
    cout << typeid(num2).name() << endl;

    return 0;
}
