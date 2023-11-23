#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    
    for(int i=0; i<n/2; i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
        
       
    }
    
    for(int k=0;k<n; k++){
        printf("my reversed arrays %d index is %d\n",k,arr[k]);
    }

    return 0;
}
