#include <stdio.h>

int fibo_n(int fibo[],int num){
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=num;i++){
        fibo[i] = (fibo[i-1] + fibo[i-2]);
    }
    return fibo[num];
}
int fibo[1000000];
int main(){
    int num;
    scanf("%d",&num);
    
    printf("%d",fibo_n(fibo,num));
    return 0;
}
