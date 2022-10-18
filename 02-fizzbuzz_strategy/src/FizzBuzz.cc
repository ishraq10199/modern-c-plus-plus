#pragma once
#include "FizzBuzz.h"
#include <iostream>

FizzBuzz::FizzBuzz()
{
    fbBehavior = nullptr;
}
FizzBuzz::FizzBuzz(IFizzBuzzBehavior *_fbBehavior)
{
    this->fbBehavior = _fbBehavior;
}
FizzBuzz::~FizzBuzz()
{
    delete this->fbBehavior;
}

void FizzBuzz::setFizzBuzzBehavior(IFizzBuzzBehavior *_fbBehavior)
{
    delete this->fbBehavior;
    this->fbBehavior = _fbBehavior;
}

void FizzBuzz::run(int n)
{
    if (this->fbBehavior == nullptr)
    {
        std::cout << "No behavior set for FizzBuzz object!" << std::endl;
    }
    fbBehavior->run(n);
}