#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i+1;k++){
            printf("%d", k);
        }
        for(int l =n-1; l>i;l--){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}