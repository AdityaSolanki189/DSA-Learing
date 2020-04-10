//Week_3 Prob.2 Maximum Value of the Loot 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    double cap,temp;
    scanf("%d %lf",&num,&cap); 
    double v[1000],w[1000],A[1000],ratio[1000],sum=0;
    for(int i=0;i<num;i++){
        scanf("%lf %lf",&v[i],&w[i]);
        ratio[i] = v[i]/w[i];
        A[i]=0;
    }
    for (int i=0;i<num;i++) {
      for (int j=i+1;j<num;j++) {
            if (ratio[i] < ratio[j]) {
                temp = ratio[j];
                ratio[j] = ratio[i];
                ratio[i] = temp;
 
                temp = w[j];
                w[j] = w[i];
                w[i] = temp;
 
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
    for(int i=0;i<num;i++){
        if(cap>=w[i]){
            A[i]=1;
            cap = cap-w[i];
        }
        else if(cap<w[i] && cap!=0){
            A[i]= cap/w[i];
            sum = sum + (A[i]*v[i]);
            break;
        }
        else{
            A[i]=0;
            break;
        }
        sum = sum + (A[i]*v[i]);
    }
    printf("%lf",sum); 
    return 0;
}
