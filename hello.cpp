// Hello World
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // variables, se puede crear variables sin inicializar
    int uninitializedInt; // si no se inicializa, toma valor random o da error, dependediendo del compilador
    int initializedInt = 7;
    signed j = -5;
    cout << uninitializedInt << " is a random value" << endl;
    cout << initializedInt << " was assigned an initial value" << endl;

    // casting
    float myFloat = 3.14f;

    int i1 = (int)myFloat;
    int i2 = int(myFloat);
    int i3 = static_cast<int>(myFloat); // es el mas recomendable de usar
    int i4 = myFloat;                   // puede suponer perdidas de informacion

    cout << i1 << i2 << i3 << i4 << endl;
}
