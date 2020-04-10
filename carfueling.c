#include <stdio.h>

int main(){
    int d,m,n,cur=0,min=0,last=0;
    scanf("%d%d%d",&d,&m,&n);
    int stops[100000];
    for(int i=0;i<n;i++){
        scanf("%d",&stops[i]);
    }
    
    while(cur<(d-1)){
        last = cur;
        while((cur<(d-1)) && (stops[cur+1] - stops[last]) <= m){
            cur++;
            if(cur == (d-1))
                break;
        }
        if(cur ==last){
            min=-1;
            break;
        }
        if(cur < (d-1)){
            min++;
        }

    }
    printf("%d",min);
}