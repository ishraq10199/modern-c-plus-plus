#include "02.h"
#include "LoopFizzBuzzBehavior.cc"
#include "RecursiveFizzBuzzBehavior.cc"
#include "FizzBuzz.cc"
#include <iostream>

int main()
{
    FizzBuzz fb;

    std::cout << "-----------------------------------------"
              << std::endl
              << "\tFizzbuzz -- loop edition:"
              << std::endl
              << "-----------------------------------------"
              << std::endl;

    fb.setFizzBuzzBehavior(new LoopFizzBuzzBehavior());
    fb.run(30);

    std::cout << "---------------------------------------------"
              << std::endl
              << "\tFizzbuzz -- recursive edition:"
              << std::endl
              << "---------------------------------------------"
              << std::endl;

    fb.setFizzBuzzBehavior(new RecursiveFizzBuzzBehavior());
    fb.run(30);

    return 0;
}