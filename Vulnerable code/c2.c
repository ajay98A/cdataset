#include <stdio.h>
#include <string.h>

void vulnerable_function() {
    char buffer[10];
    strcpy(buffer, "This string is way too long for the buffer!");
    printf("Buffer contents: %s\n", buffer);
}

int main() {
    vulnerable_function();
    return 0;
}