#pragma once
#include "RecursiveFizzBuzzBehavior.h"
#include <iostream>

void RecursiveFizzBuzzBehavior::run(int n)
{
    // BASE CASE
    if (n == 0)
        return;

    // RECURSIVE CASE
    this->run(n - 1);

    // PRINT IN REVERSE ORDER AFTER
    // RECURSION REACHES BASE CASE

    std::cout << n << "\t";
    if (n % 3 == 0)
        std::cout << "Fizz";
    if (n % 5 == 0)
        std::cout << "Buzz";
    std::cout << std::endl;
}