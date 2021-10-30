#include <iostream>
#include <sstream>
#include <bitset>

int main() {
    // User prompt
    std::string arg;
    std::getline(std::cin, arg);

    // Getting the binary equivalent of the input.
    std::bitset<8> Binary = std::bitset<8>(std::stoi(arg));
    std::bitset<8> Invert, Compliment;

    // Invert the bitset to set it up for two's compliment.
    Invert = Binary;
    Invert.flip();

    // Add one bit to the bit set to give the two's compliment.
    Compliment = Invert;
    Compliment = Compliment.to_ulong() + 1;

    // Print out the information to the user.
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

    // Pause so the user can see their information.
    system("pause");
}
