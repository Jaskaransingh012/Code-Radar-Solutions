#include <stdio.h>

int main() {
    int a,b,c;
    if(a==b && b==c){
        printf("Equilateral");
    }else if(a!=b && b!=c && a!=c){
        printf("Scalene");
    }else{
        printf("Isosceles");
    }
    return 0;
}