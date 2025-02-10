#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Check if the MSB is set
    if (num & (1 << 31)) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}