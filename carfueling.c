#include <stdio.h>
int stops[100000];
int main(){
    int d,m,n,cur=0,min=0,last=0;
    scanf("%d%d%d",&d,&m,&n);

    for(int i=0;i<n;i++){
        scanf("%d",&stops[i]);
    }
    
    while(cur<d){
        last = cur;
        while((stops[cur+1]-stops[last])<=m){
            cur =cur+1;
        }
        if(cur==last){
            break;
        }
        if(cur<=d){
            min = min+1;
        }
    }
    printf("%d",min);
}