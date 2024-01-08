#include <stdio.h>

int fibonacci(int n){
    if(n<=1){
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    
    int terim_sayisi;
    
    
    printf("kacinci terime kadar fibonacci hesaplamak istersin ?");
    scanf("%d",&terim_sayisi);
    
    
    for(int i=0; i<terim_sayisi; i++){
        printf("%d",fibonacci(i));
    }

    return 0;
}
