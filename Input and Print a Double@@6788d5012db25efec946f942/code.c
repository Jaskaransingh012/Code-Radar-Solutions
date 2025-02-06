#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float n;
    scanf("%d",&n);
    printf("You entered: %.4f",n);
}