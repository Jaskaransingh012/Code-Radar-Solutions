#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%s", a==b?"Equal":a>b?"First":"Second");
    return 0;
}