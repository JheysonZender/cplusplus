#include <iostream>
#include <array>

int main(int argc, char *argv[])
{
    // C-style Array

    // declaracion con tamaña de array fijo
    int myArray[3];

    // inicializando datos
    myArray[0] = 0;
    myArray[1] = 0;
    myArray[2] = 0;

    // inicializando todos los valores del array en 0
    int myArray1[3] = {0};
    // inicializa el primer valor con 2 y el rescto con 0
    int myArray2[3] = {2};
    // inicializando con una lista, se puede dejar a inferir el tamaño de array
    int myArray3[] = {1, 2, 3};
    // se puede poner explicitamente el tamaño
    int myArray4[3] = {1, 2, 3};

    // std::array

    std::array<int, 6> arr = {9, 8, 7};
    std::cout << "Array size: " << arr.size() << std::endl;
    std::cout << "Element 2: " << arr[4] << std::endl;
    return 0;
}