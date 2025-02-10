#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n==0){
        printf("Zero");
    }else{
        printf("%s", n>0?"Positive":"Negative");
    }
    return 0;
}