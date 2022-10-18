#pragma once
#include "IFizzBuzzBehavior.h"

class FizzBuzz
{
    IFizzBuzzBehavior *fbBehavior;

public:
    FizzBuzz();
    FizzBuzz(IFizzBuzzBehavior *_fbBehavior);
    ~FizzBuzz();
    void setFizzBuzzBehavior(IFizzBuzzBehavior *_fbBehavior);
    void run(int n);
};