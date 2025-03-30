#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    for (int i = 1; i < n - 1; i++) { // Start from index 1 and go up to n-2
        if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
            return arr[i]; // Return the first peak element found
        }
    }
    return -1; // Return -1 if no peak element is found
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  // Variable-length array (valid in C99 and later)
    
    for (int i = 0; i < n; i++) {  // Start loop from 0
        scanf("%d", &arr[i]);
    }

    printf("%d", findFirstPeak(arr, n));
    
    return 0;
}
