#include <iostream>

void myFunction(int i, char c)
{
    std::cout << "the value of i is " << i << std::endl;
    std::cout << "the value of c is " << c << std::endl;
}

int addNumbers(int number1, int number2)
{
    std::cout << "Entering function " << __func__ << std::endl;
    return number1 + number2;
}

int main(int argc, char *argv[])
{
    myFunction(8, 'a');
    myFunction(1, 'b');

    int sum = addNumbers(5, 3);

    std::cout << sum << std::endl;

    return 0;
}
