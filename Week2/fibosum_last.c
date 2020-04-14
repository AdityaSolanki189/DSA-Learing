#include <stdio.h>

int calc_fib(long long int num) {

    long long int fibzero = 0,fibone = 1,fibnext;

    long long int res = 1;
    for (long long int i = 2; i <= num; i++) {

        fibnext = (fibone + fibzero)%10;
        fibzero = fibone;
        fibone = fibnext;
        res = res + fibnext;
    }
    if(num==0)
        res = 0;
    
    return (res % 10);
}
int main(){
    long long int num;
    scanf("%lld",&num);
    
    printf("%d",calc_fib(num));
    return 0;
}
