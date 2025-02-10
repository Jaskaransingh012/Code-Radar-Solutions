#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s",(n%3==0 && n%5==0)?"Divisible by Both":n%3==01?"Divisible by 3":"Divisible by 5");
    return 0;
}