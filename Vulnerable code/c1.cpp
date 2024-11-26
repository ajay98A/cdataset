#include <iostream>
#include <cstring>

void bufferOverflowExample() {
    char buffer[16];
    std::cout << "Enter input: ";
    // Unsafe: Allows overflowing the buffer
    std::cin >> buffer;
    std::cout << "You entered: " << buffer << std::endl;
}

int main() {
    std::cout << "Demonstrating buffer overflow in C++...\n";
    bufferOverflowExample();
    return 0;
}
