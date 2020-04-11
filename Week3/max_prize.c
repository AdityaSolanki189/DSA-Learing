#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    int a[100000]={0};
    for(int i=1;i<=n;i++){
        if(n-i > i){
            a[i] = i;
            count++;
            n= n-i;
        }
        else{
            a[i] += n;
            count++;
            break;
        }
    }  
    printf("%d\n",count);
    for(int i=1;i<=n;i++){
        if(a[i]>0)
            printf("%d ",a[i]);
    }
    return 0;
}