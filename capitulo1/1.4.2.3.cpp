// 1.4.2.3
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "La suma de los números en el rango de 50 a 100 es "
        << sum << std::endl;
    return 0;
}
