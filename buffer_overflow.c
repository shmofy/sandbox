#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    char input[20];

    printf("Enter some input: ");
    fgets(input, sizeof(input), stdin);

    strcpy(buffer, input); // This line is vulnerable to buffer overflow

    printf("You entered: %s\n", buffer);

    return 0;
}
