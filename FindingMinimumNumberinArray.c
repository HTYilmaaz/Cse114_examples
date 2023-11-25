#include<stdio.h>

int findmin(int arr[],int n){
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    return min;
}

int main(){
    int arr[]={7,5,3,5,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=findmin(arr,n);
    printf("your min is %d",k);
    return 0;
    
}
