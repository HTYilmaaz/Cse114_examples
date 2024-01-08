#include <stdio.h>

int power_calculator(int taban, int us){
    if (us == 0){
        return 1;
    }
    else{
        return taban * power_calculator(taban, us - 1);
    }
    
}


int main() {
    
    int taban;
    int us;
    
    printf("Üssünü almak istediğiniz sayıyı girin: ");
    scanf("%d", &taban);

    printf("Üs değerini girin: ");
    scanf("%d", &us);
    
    printf(" %d ^ %d = %d",taban,us,power_calculator(taban, us));
    
    return 0;
   
}
