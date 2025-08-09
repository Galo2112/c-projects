// 1.4.3.1
#include <iostream>

int main()
{
    int sum = 0, value = 0;
    // read inti end of file calculating a running total of all values read 
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum +value
    std::cout << "sum is: " << sum << std::endl;
    return 0;
}
