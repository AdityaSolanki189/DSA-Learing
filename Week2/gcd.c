#include <stdio.h>

long int gcd(long int num1,long int num2){
    long int gcd=0;
    for(long int i = 1;i<=num1 && i<=num2;++i){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    return gcd;
}

int main(){
    long int num1,num2;
    scanf("%ld%ld",&num1,&num2);

    printf("%ld",gcd(num1,num2));
    return 0;
}