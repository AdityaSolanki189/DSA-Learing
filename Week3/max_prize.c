#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[1000];
    for (int i = 1; n; i++) {
        if (n - i > i) {
            a[i]=i;
            count++;
            n= n-i;
        } 
        else {
            a[i] = n;
            count++;
            break;
        }
    
    }   
    printf("%d",count);
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}