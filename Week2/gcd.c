#include <stdio.h>

long long int gcd(long int num1,long int num2){
    long long int gcd=0;
    for(long long int i = 1;i<=num1 && i<=num2;++i){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    long long int num1,num2;
    scanf("%lld%lld",&num1,&num2);

    printf("%lld",gcd(num1,num2));
    return 0;
}