#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int k=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d", k);
            if(k){
                k=0;
            }else{
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}