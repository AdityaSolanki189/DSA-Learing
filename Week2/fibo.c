#include <stdio.h>

int fibo_n(int num){
    if(num<=1)
        return num;
    return fibo_n(num-1)+fibo_n(num-2);
}
int main(){
    int num;
    scanf("%d",&num);
    printf("%d",fibo_n(num));
    return 0;
}
