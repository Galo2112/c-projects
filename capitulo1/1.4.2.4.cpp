// 1.4.2.4
#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 10; i >= 0; --i)
        sum -= i;
    std::cout << "La resta de los numeros en el rango de 0 a -10 es "
        << sum << std::endl;
    return 0;
}
