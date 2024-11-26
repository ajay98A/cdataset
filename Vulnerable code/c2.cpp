#include <iostream>

void useAfterFreeExample() {
    std::cout << "\nDemonstrating use-after-free in C++...\n";
    int *ptr = new int(42); // Dynamically allocate memory
    std::cout << "Value: " << *ptr << std::endl;

    delete ptr; // Free the memory

    // Accessing memory after it's freed
    std::cout << "Accessing freed memory: " << *ptr << std::endl;
}

int main() {
    useAfterFreeExample();
    return 0;
}
