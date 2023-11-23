#include <stdio.h>

int main()
{
    
int arr[]={15,7,4,11,11,2};

int min=arr[0];

for(int i=1; i<6; i++){
    if(arr[i]<min) min=arr[i];
    printf("new min is %d\n",min);//to check if its working correctly
}
    printf("minumum number is %d",min);
    
return 0;    
    
}
