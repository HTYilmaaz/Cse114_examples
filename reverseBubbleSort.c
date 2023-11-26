#include <stdio.h>

int temporary;
void reversebubblesort(int arr[],int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]<arr[j+1]){
                temporary=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temporary;
                
            }
        }
    }
}


int main(){
    int arr[]={7,12,45,22,1,9,6};
    int size= sizeof(arr)/sizeof(arr[0]);
    
    reversebubblesort(arr,size);
    for(int k=0; k<size; k++){
        printf("%d\n",arr[k]);
        
    }
    return 0;
}

  

