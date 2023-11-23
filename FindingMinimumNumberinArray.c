#include<stdio.h>

int findmin(int arr[],int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[]={15,12,9,11,4,5,8};
    
    int x=findmin(arr,7);
    printf("%d",x);
    return 0;
}
