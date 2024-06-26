#include <string.h>
#include <stdio.h>

void copy_string(char *dest, char *src, size_t n) {
    strncpy(dest, src, n);
    dest[n-1] = '\0';
}

int main() {
    char src[100] = "This is a long string that will overflow the destination buffer.";
    char dest[20];

    copy_string(dest, src, sizeof(dest));
    printf("%s\n", dest);

    return 0;
}
