#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int num = 1;
    for(int i =0; i<n; i++){
        for(int j =0; j<=i; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}