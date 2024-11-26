#include <iostream>

void doubleFreeExample() {
    std::cout << "\nDemonstrating double-free in C++...\n";
    int *ptr = new int(100);
    std::cout << "Value: " << *ptr << std::endl;

    delete ptr; // Free the memory
    delete ptr; // Double free
}

int main() {
    doubleFreeExample();
    return 0;
}
