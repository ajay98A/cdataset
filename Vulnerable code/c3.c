#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function simulating an unsafe operation
void process_input(char *input) {
    char buffer1[16];
    char buffer2[32];
    printf("Processing input...\n");

    // Intentional buffer overflow vulnerability
    strcpy(buffer1, input);

    // Overwrite buffer2 (out-of-bounds write)
    for (int i = 0; i < 40; i++) {
        buffer2[i] = 'A';
    }

    printf("Buffer1 contains: %s\n", buffer1);
    printf("Buffer2 contains: %s\n", buffer2);
}

// Another function that misuses memory
void use_after_free() {
    printf("\nDemonstrating use-after-free...\n");
    char *temp = (char *)malloc(10);
    strcpy(temp, "Hello");
    free(temp); // Memory is freed

    // Accessing freed memory
    printf("Accessing freed memory: %s\n", temp);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <input>\n", argv[0]);
        return 1;
    }

    printf("Demonstrating memory issues...\n");
    
    // Call function with buffer overflow
    process_input(argv[1]);

    // Call function with use-after-free
    use_after_free();

    return 0;
}
