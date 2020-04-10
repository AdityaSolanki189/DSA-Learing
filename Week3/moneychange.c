#include <stdio.h>

int main(){
    int m,count=0;
    scanf("%d",&m);
    while(m!=0){
        if(m>=10){
            m = m-10;
            count++;
        }
        else if(m>=5){
            m = m-5;
            count++;
        }
        else if(m>=1){
            m = m -1;
            count++;
        }
        else{
            break;
        }
    }
    printf("%d",count);
}