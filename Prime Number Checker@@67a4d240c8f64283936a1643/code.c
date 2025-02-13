#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
        int num;
        scanf("%d", &num);
        printf("%d\n", isPrime(num));
        t--;
    }
    return 0;
}
