#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  // Variable-length array (valid in C99 and later)
    
    for (int i = 0; i < n; i++) {  // Start loop from 0
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<n-1; i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            printf("%d", arr[i]);
            break;
        }
    }
    
    return 0;
}
