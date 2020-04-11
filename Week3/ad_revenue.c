#include <stdio.h>

void sort(long int m[],long int n){
    for(long int i=0;i<n;i++){
        for(long int j=i+1;j<n;j++){
            if(m[i]<m[j]){
                long int temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
}

int main(){
    long int n,a[1000],b[1000];
    scanf("%ld",&n);
    for(long int i=0;i<n;i++){
        scanf("%ld",&a[i]);
    }
    for(long int i=0;i<n;i++){
        scanf("%ld",&b[i]);
    }
    sort(a,n);
    sort(b,n);
    long int res=0;
    for(long int i=0;i<n;i++){
        res += (a[i]*b[i]);
    }
    printf("%ld",res);
    return 0;
}

