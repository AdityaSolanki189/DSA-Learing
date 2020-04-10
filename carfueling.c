#include <stdio.h>


int main(){
    int d,m,n,s[300],num_ref;
    scanf("%d%d%d",&d,&m,&n);
     
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    
    
    num_ref = car_fuel(d,m,n,s);
    printf("%d",num_ref);
    return 0;
}

int car_fuel(int d,int m,int n,int s[]){
    int cur=0,min=0;
    while(cur<=d){
        
        int last =cur;
        while(cur<=d && (s[cur+1] - s[last])<=m){
            cur++;
        }
        if(cur==last){
            return -1;
            break;
        }
        if(cur<=d){
            min++;
        }
    }
    return min;
}

