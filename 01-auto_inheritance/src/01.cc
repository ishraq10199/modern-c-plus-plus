#include <iostream>
#include "MallardDuck.cc"
#include "RubberDuck.cc"
#include <vector>

int main()
{
    Duck *d1 = new MallardDuck();
    Duck *d2 = new RubberDuck();
    std::vector<Duck *> ducks = {d1, d2};
    for (auto d : ducks)
        d->quack();
    return 0;
}