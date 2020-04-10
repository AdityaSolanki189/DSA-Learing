#include <stdio.h>


int main(){
    int d,m,n,s[1000];
    scanf("%d%d%d",&d,&m,&n);
    s[0] = 0;
    for(int i=1;i<=n;i++){
        scanf("%d",&s[i]);
    }
    s[n+1] = d;
    
    
    int cur=0,min=0;
    while(cur <= n){

        int last =cur;

        while(cur<=n && (s[cur+1] - s[last])<=m){
            cur++;
        }
            if(cur==last){
            min=-1;
            break;
            }   
            if(cur<=n){
            min++;
        }
    }
    printf("%d",min);
}

