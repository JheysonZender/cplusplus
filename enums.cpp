#include <iostream>

int main(int argc, char *argv[])
{
    // enum types
    enum PieceType
    {
        PieceTypeKing = 1,
        PieceTypeQueen,
        PieceTypeRook = 10,
        PieceTypePawn
    };

    PieceType myPiece;
    myPiece = PieceTypeKing;

    if (myPiece == 1) // si se pueden comparar
    {
        std::cout << "si se puede comparar" << std::endl;
    }

    enum class MyEnum // aca ya no se pueden comparar
    {
        EnumValue1,
        EnumValue2 = 10,
        EnumValue3
    };

    MyEnum value1 = MyEnum::EnumValue1;

    enum class MyEnumChar : char
    {
        EnumValueLong1 = 'a',
        EnumValueLong2 = 'b',
        EnumValueLong3 = 'c'
    };

    MyEnumChar char1 = MyEnumChar::EnumValueLong3;

    return 0;
}