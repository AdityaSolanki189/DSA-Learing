#include <stdio.h>



int main(){
    long long int j,a=0,b=1,c,num,m;
    scanf("%lld%lld",&num,&m);

    for(j=2;j<=num;j++){
        c = a+b;
        a = b;
        b = c;
    }

    
    printf("%lld",);
    return 0;
}
