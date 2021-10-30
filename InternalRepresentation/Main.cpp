#include <iostream>
#include <sstream>
#include <bitset>

int main() {
    std::string arg;
    std::getline(std::cin, arg);

    std::bitset<8> Binary = std::bitset<8>(std::stoi(arg));
    std::bitset<8> Invert, Compliment, CompDeci;

    Invert = Binary;
    Invert.flip();

    Compliment = Invert;
    Compliment.set(0, true);

    std::cout
        << "Entered Value: " + arg 
        << std::endl << std::endl
        << "Binary Value: " + Binary.to_string() 
        << std::endl
        << "Inverted Value: " + Invert.to_string() 
        << std::endl << std::endl
        << "Compliment Value: " + Compliment.to_string() 
        << std::endl
        << "Compliment Decimal Value: " + std::to_string((int8_t)Compliment.to_ulong())
        << std::endl << std::endl;

    system("pause");
}