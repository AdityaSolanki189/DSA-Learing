#include <stdio.h>

int main(){
    int num,i,j;
    scanf("%d",num);
    long int a[100],b[100],temp=0;
    for(i=0;i<num;i++){
        scanf("%ld%ld",&a[i],&b[i]);
    }
    for(i=0;i<num;i++){                //sorting in ascending
        for(j=i+1;j<num;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    
    int com,count=0,last;
    for(i=0;i<num;i++){
        
    }


}