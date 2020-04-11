#include <stdio.h>
#include <stdlib.h>
long long int n,i,j;

long long int maxp(long long int a[],long long int n){
    long long int first = 0, second = 0;
	for (i = 0; i < n; i++){
		if (a[i] > first){
			second = first;
			first = a[i];
		}
		else if (a[i] > second){
			second = a[i];
		}
	}
	return first*second;
}
int main(){    
    long long int a[200000];
    scanf("%lld",&n);
    
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    printf("%lld",maxp(a,n));    
    return 0;
}