#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s",(n%3==0 && n%5==0)?"Divisible by Both":n%3==0?"Divisible by 3":n%5==0?"Divisible by 5":"Not Divisible");
    return 0;
}