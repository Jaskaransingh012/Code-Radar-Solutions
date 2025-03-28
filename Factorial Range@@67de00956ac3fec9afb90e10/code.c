int factorialRange(int n,int a){
    int num,fact=1,i,j;
    if(n<0 || n>a){
        printf("Invalid range");
        return 0;
    }
    for(i=n;i<=a;i++){
        for(j=1;j<=i;j++){
            fact*=j;
        }
        printf("%d\n",fact);
        fact=1;
    }
}