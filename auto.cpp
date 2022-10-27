#include <iostream>

auto divideNumbers(double numerator, double denominator)
{
    return numerator / denominator;
}

auto main() -> int
{
    auto r = divideNumbers(1, 2);
    std::cout << r << std::endl;
    return 0;
}