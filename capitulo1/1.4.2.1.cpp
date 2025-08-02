// 1.4.2.1
#include <iostream>

int main()
{
    int sum = 0;
    // sum values from 1 thought 10 inclusive 
    for (int val = 1; val <= 10; ++val)//for se divide en 3 es for(inicialisacion; condicion; incremento) 
        sum += val; // equivalent to sum = sum +val el cuerpo del for se ejecuta antes que el incremento
    std::cout << "sum of 1 to 10 inclusive is "
        << sum << std::endl;
    return 0;
}
