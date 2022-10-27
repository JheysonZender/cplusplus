#include <iostream>

auto func(int number) -> int
{
    return number + 2;
}

auto main() -> int
{
    std::cout << func(3) << std::endl;
}