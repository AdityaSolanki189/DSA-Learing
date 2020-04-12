#include <stdio.h>
void sort(long int s[],long int f[],int num){
    int i=0,j=0;
    for(i=0;i<num;i++){                //sorting in ascending
        for(j=i+1;j<num;j++){
            if(f[i]>f[j]){
                long int temp = f[i];
                f[i] = f[j];
                f[j] = temp;
                temp=0;
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
void min_interval(long int s[],long int f[],int num){
    
}
int main(){
    int num,i,j;
    scanf("%d",&num);
    long int s[100],f[100],temp=0;
    for(i=0;i<num;i++){
        scanf("%ld%ld",&s[i],&f[i]);
    }
    sort(s,f,num);
    
    return 0;
}