#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf("%s", (a >= 'A' && a <= 'Z')?"Uppercase":"Lowercase");

    return 0;
}