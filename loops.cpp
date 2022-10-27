#include <iostream>
#include <array>

int main(int argc, char *argv[])
{
    // 1. while

    int i = 0;
    while (i < 5)
    {
        std::cout << "This is silly" << std ::endl;
        ++i;
    }

    std::cout << i << std ::endl;
    // break -> romper el bucle
    // continue -> salta una iteracion

    // 2. do while
    // el bloque se ejectutara al menos una vez sin importar el resultado de la condicional.

    int j = 100;
    do
    {
        std::cout << "This is silly" << std ::endl;
        ++j;
    } while (j < 5);

    // 3. for

    for (int i = 0; i < 5; i++)
    {
        std::cout << "This is for silly" << std::endl;
    }

    // 4. Range-based for loop
    // it works in anything that has a begin() and end() method returning iterators.

    std::array<int, 5> arr = {3, 5};

    for (int i : arr)
    {
        std::cout << i << std::endl;
    }

    return 0;
}