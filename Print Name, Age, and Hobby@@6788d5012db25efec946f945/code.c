#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char[100] a,c;
    int b;
    scanf("%s %d %s", &a, &b, &c);
    printf("Name: %s\n Age: %d\n Hobby: %c", a, b, c);
    return 0;
}