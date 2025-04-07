// Your code here...
#include <stdio.h>
int isSorted(int arr[], int n){
    for(int i=1; i<n-1;i++){
        for(int j=i;j<n-1; j++){
            if(arr[i]>arr[i+1]) return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n; i++){
        scanf("%d", &arr[i]);
    }
    printf("%s", isSorted(arr, n)?"Sorted":"Not Sorted")
}