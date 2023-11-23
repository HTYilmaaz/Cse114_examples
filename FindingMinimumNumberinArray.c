#include <stdio.h>

int main()
{
    
int arr[]={5,4,3,2,1,6};

int min=arr[0];

for(int i=0; i<6; i++){
    if(arr[i]<min) min=arr[i];
    
}
    printf("minumum number is %d",min);
    
return 0;    
    
}