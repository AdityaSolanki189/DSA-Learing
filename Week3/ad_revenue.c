#include <stdio.h>

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
        int max_a = max(a);
        int max_b = max(b);
    }
    
    return 0;
}

int max(int m){
    
}