#include <iostream>

using std::cout;

int main(void)
{
    int numbers[] = { 10, 20, 30 };

    for (const auto& num : numbers)
    {
        cout << num << std::endl; 
    }
}
