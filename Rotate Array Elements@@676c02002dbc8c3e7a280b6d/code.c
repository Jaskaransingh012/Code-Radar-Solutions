// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int rotate;
    scanf("%d", &rotate);
    while(rotate>0){
        int temp = arr[0];
        for(int i=0; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1]=temp;
        rotate--;
    }
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}