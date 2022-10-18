#pragma once
#include "LoopFizzBuzzBehavior.h"
#include <iostream>

void LoopFizzBuzzBehavior::run(int n)
{
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << "\t";
        if (i % 3 == 0)
            std::cout << "Fizz";
        if (i % 5 == 0)
            std::cout << "Buzz";
        std::cout << std::endl;
    }
}