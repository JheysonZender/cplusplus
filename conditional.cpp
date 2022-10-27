#include <iostream>

int main(int argc, char *argv[])
{
    // condicional

    int backgroundColor = 3;
    switch (backgroundColor)
    {
    case 4:
    case 5:
        std::cout << "case 4 y 5" << std::endl;
        break;
    case 6:
        std::cout << "case 6" << std::endl;
        break;
    default:
        std::cout << "ni 4 ni 5 ni 6" << std::endl;
        break;
    }

    // conditional operator
    int valor = 2;
    (valor > 2)
        ? std::cout << "es mayor que 2" << std::endl
        : std::cout << "es menor o igual a 2" << std::endl;
    return 0;
}