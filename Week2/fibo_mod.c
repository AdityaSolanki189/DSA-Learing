#include <stdio.h>

long long int fibo_n(long long int fibo[],long long int num,int m){
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=num;i++){
        fibo[i] = (fibo[i-1] + fibo[i-2])%m;
    }
    return fibo[num];
}
long long int fibo[1000000];
int main(){
    long long int num,m;
    scanf("%lld%d",&num,&m);
    
    printf("%d",fibo_n(fibo,num,m));
    return 0;
}
