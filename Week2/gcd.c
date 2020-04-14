#include <stdio.h>

int main(){
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    
    int c = 0;
    while (b != 0){
        c = a % b;
        a = b;
        b = c;
      }
    
    printf("%lld",a);
    return 0;
}