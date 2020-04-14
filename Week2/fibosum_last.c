#include <stdio.h>

int main(){
    long long int j,a=0,b=1,c,num,sum=0;
    scanf("%lld",&num);
    if(num==0)
        sum=0;
    else if(num==1)
        sum=1;
    for(j=2;j<=num;j++){
        sum=1;
        c = a+b;
        sum +=c;
        a = b;
        b = c;
    }
   
    printf("%lld",sum%10);
    return 0;
}
