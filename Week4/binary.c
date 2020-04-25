#include<stdio.h>

int BinarySearch(int n_arr[],int k_arr[],int low,int high,int i){
    if(high<low)
        return low-1;
    int mid = low + ((high-low)/2);
    if(k_arr[i] == n_arr[mid])
        return mid;
    if(k_arr[i]<n_arr[mid])
        return BinarySearch(n_arr,k_arr,low,mid-1,i);
    else
        return BinarySearch(n_arr,k_arr,mid+1,high,i);        
}

int main(){
    int n,n_arr[30000],k,k_arr[100000],location;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&n_arr);
    scanf("%d",&k);
    for(int i=0;i<k;i++) scanf("%d",&k_arr);
    int f_arr[100000]={0};
    int low=0,high=n-1;
    for(int i=0;i<k;i++){
        location = 0;
        location = BinarySearch(n_arr,k_arr,low,high,i);
        printf("%d ",location);
    }
    return 0;
}