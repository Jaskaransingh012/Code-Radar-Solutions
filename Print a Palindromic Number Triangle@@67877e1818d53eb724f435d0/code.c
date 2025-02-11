#include <stdio.h>

int main() {
    int n;
    int s=0;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i+1;k++){
            printf("%d", k);
        }
        int j=s;
        for(int l=0; i<=i; l++){
            printf("%d", j--);
        }
        printf("\n");
    }
    return 0;
}