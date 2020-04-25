#include<stdio.h>

int BinarySearch(int num[],int low,int high,int key){
    if(high<low)
        return -1;
    int mid = low + ((high-low)/2);
    if(key == num[mid])
        return mid;
    else if(key < num[mid])
        return BinarySearch(num,low,mid-1,key);
    else 
        return BinarySearch(num,mid+1,high,key);   
}

int main(){
    int n,k,location,key;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++) 
        scanf("%d",&num[i]);
    scanf("%d",&k);
    int k_arr[k];
    for(int i=0;i<k;i++) 
        scanf("%d",&k_arr[i]);
    int low=0,high = n-1;
    for(int i=0;i<k;i++){
        location=0,key=0;
        key = k_arr[i];
        location = BinarySearch(num,low,high,key);
        printf("%d ",location);
    }
    return 0;
}