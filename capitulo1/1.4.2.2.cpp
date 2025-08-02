// 1.4.2.2
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    std::cout << "La suma de los números en el rango de -100 a 100 es "
        << sum << std::endl;
    return 0;
}
