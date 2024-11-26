#include <iostream>

void memoryLeakExample() {
    std::cout << "\nDemonstrating memory leak in C++...\n";
    int *ptr = new int[100]; // Allocate memory but forget to free it
    ptr[0] = 42; // Use allocated memory
    std::cout << "First element: " << ptr[0] << std::endl;

    // No delete[] call
}

int main() {
    memoryLeakExample();
    return 0;
}
