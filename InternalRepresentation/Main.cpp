#include <iostream>
#include <sstream>
#include <bitset>

int main() {
    // User prompt
    std::string arg;
    std::getline(std::cin, arg);

    // Converting the input into Binary, One's Complement, and Two's Complement.
    std::bitset<8> Binary   = std::bitset<8>(std::stoi(arg));
    std::bitset<8> OneComp  = std::bitset<8>(~std::stoi(arg));
    std::bitset<8> TwoComp  = std::bitset<8>(~std::stoi(arg)).to_ulong() + 1ull;//Invert.to_ulong() + 1ull;

    // IEEE conversion from float to 32-bit floating point.
    auto bitCast = std::bit_cast<uint32_t>(std::stof(arg));
    std::bitset<32> IEEE = std::bitset<32>(bitCast);

    // Print out the information to the user.
    std::cout   << "Entered Value: "        + arg
                << "\n\nBinary Value: "     + Binary.to_string()
                << "\nInverted Value: "     + OneComp.to_string()
                << "\n\nCompliment Value: " + TwoComp.to_string()
                << "\nCompliment Decimal: " + std::to_string((int8_t)TwoComp.to_ulong())
                << "\n\nIEEE Value: "       + IEEE.to_string() << std::endl;

    // Pause so the user can see their information.
    system("pause");
}
