#include <stdio.h>

int main() {
    char a[100], c[100];
    int b;
    
    scanf("%s %d %s", a, &b, c);

    printf("Name: %s\nAge: %d\nHobby: %s\n", a, b, c);
    
    return 0;
}
