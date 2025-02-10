#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%s", (1>=n && n<=100)?"In Range":"Out of Range");
    return 0;
}