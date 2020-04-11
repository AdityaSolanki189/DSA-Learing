#include <stdio.h>

void sort(int m[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(m[i]<m[j]){
                int temp = m[i];
                m[i] = m[j];
                m[j] = temp;
            }
        }
    }
}

int main(){
    int n,a[1000],b[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    sort(a,n);
    sort(b,n);
    long int res=0;
    for(int i=0;i<n;i++){
        res += (long int)(a[i]*b[i]);
    }
    printf("%d",res);
    return 0;
}

