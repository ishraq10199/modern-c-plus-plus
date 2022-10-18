#pragma once

class IFizzBuzzBehavior
{
public:
    virtual ~IFizzBuzzBehavior() = 0;
    virtual void run(int n) = 0;
};

IFizzBuzzBehavior::~IFizzBuzzBehavior()
{
}