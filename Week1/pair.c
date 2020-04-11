#include <stdio.h>
long long int i,j,temp=0;
void sort(long long int a[],long long int n){
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    long long int n,a[200000];
    scanf("%lld",&n);
    
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    sort(a,n);
    printf("%lld",a[n-1]*a[n-2]);    
}

//time limit exceded (1.98/1.00)