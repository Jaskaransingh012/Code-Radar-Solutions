// Your code here...
#include <stdio.h>
int isSorted(int arr[], int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            printf("Sorted");
        }else{
            printf("Not Sorted");
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%s", isSorted(arr, n)?"Sorted":"Not Sorted");
}