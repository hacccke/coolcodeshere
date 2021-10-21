#include <stdio.h>

char* func(char *str) {
    return str;
}

void main() {
    char *str = "What the hack\n";
    char *str2 = func(str);
    printf(str2);
}
