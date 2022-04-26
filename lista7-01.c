#include <stdio.h>
 
int main(){
 
    int num;                                          
   
    do {
        printf("Entre com um numero entre 0 e 10: ");     
        scanf("%d", &num);                             
    } while(num >= 0 && num <= 10);
           
        if (num > 10);
        printf("numero fora do intervalo");                      
    
    getchar();
    return 0;
}