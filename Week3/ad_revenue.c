#include <stdio.h>

int maximum(int m[],int n){
    int max=0,index;
    for(int i=0;i<n;i++){
        if(max<m[i]){
            max= m[i];
            index = i;
        }
    }
    return index;
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
    int res=0;
    for(int i=0;i<n;i++){
        int max_a = maximum(a,n);
        int max_b = maximum(b,n);
        res = res + (a[max_a]*b[max_b]);
    }
    printf("%d",res);
    return 0;
}

