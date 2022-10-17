#include <iostream>
#include "../include/00.h"

constexpr int fibonacci(const int n)
{
    return (n == 1 || n == 2) ? 1 : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    for (int i = 1; i <= 30; i++)
        std::cout << fibonacci(i) << "\t";
    std::cout << std::endl;
    return 0;
}