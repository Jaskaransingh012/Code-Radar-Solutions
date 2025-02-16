#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;

    for (int i = 5; i <= n / i; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    
    if (scanf("%d", &t) != 1 || t <= 0) {
        printf("Invalid number of test cases\n");
        return 1;
    }

    while (t > 0) {
        int num;
        if (scanf("%d", &num) != 1) {
            printf("Invalid input\n");
            continue;
        }
        printf("%d\n", isPrime(num));
        t--;
    }
    
    return 0;
}
