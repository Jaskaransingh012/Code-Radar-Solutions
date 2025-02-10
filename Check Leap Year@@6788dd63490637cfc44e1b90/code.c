#include <stdio.h>


int main() {
    int year;
    scanf("%d", &year);
    if((n%4==0 && n%100==0) || n%400==0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}