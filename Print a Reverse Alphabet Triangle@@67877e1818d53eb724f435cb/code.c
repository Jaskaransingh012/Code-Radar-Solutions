#include <stdio.h>


int main() {
    int m;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int k = 65;
        for(int j=0; j<n-i;j++){
            printf("%c ", k++);
        }
        printf("\n");
    }
    return 0;
}