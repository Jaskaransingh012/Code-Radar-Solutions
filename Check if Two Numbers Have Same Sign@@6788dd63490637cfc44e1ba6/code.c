#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%s", ((a>0 && b<0) || (a<0 && b>0))?"Different Sign":"Same Sign");
    return 0;
}