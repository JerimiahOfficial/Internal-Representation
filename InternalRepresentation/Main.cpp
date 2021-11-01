#include <iostream>
#include <sstream>
#include <bitset>

int main() {
    // User prompt
    std::string arg;
    std::getline(std::cin, arg);

    // Getting the binary equivalent of the input inside an 8-bit register.
    std::bitset<8> Binary = std::bitset<8>(std::stoi(arg));
    std::bitset<8> Invert, Compliment;

    // Invert the bitset to set it up for two's compliment.
    Invert = Binary;
    Invert.flip();

    // Add one bit to the bit set to give the two's compliment.
    Compliment = Invert;
    Compliment = Compliment.to_ulong() + 1ull;

    // IEEE conversion from float to 32-bit floating point.
    auto bitCast = std::bit_cast<uint32_t>(std::stof(arg));
    std::bitset<32> IEEE = std::bitset<32>(bitCast);
    auto IEEE_string = IEEE.to_string();

    // Print out the information to the user.
    std::cout   << "Entered Value: "        + arg
                << "\n\nBinary Value: "     + Binary.to_string()
                << "\nInverted Value: "     + Invert.to_string()
                << "\n\nCompliment Value: " + Compliment.to_string()
                << "\nCompliment Decimal: " + std::to_string((int8_t)Compliment.to_ulong())
                << "\n\nIEEE Value: "       + IEEE_string << std::endl;

    // Pause so the user can see their information.
    system("pause");
}
