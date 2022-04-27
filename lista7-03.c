#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int time, endereco, fla=0, flu=0, vas=0, bot=0, out=0;
    int torcOutros=0, torcFlu=0;
    float salario, soma=0, media;

    
        printf("Digite o salario: \n");
        scanf("%f", &salario);

        printf("TIME");
        printf("\n1 - Fluminense");
        printf("\n2 - Vasco");
        printf("\n3 - Botafogo");
        printf("\n4 - Flamengo");
        printf("\n5 - Outros\n");
        scanf("\n%d", &time);

        if (time == 0){
            printf("Digite um numero válido");
        }
        else if (time == 1) {
            flu++;
        }
        else if (time == 2)
            vas++;
        else if (time == 3) {
	        bot++;
            soma += salario;
        }
        else if (time == 4)
            fla++;
        else {
            out++;
        }
 
        printf("ENDERECO");
        printf("\n1 - RJ");
        printf("\n2 - Niteroi");
        printf("\n3 - Outros\n");
        scanf("\n%d", &endereco);

        if (endereco == 1 && time == 4){
                torcOutros++;
        
        }else (endereco == 2 && time == 1);
                torcFlu++;

        while (time != 0){

                media = soma / bot;

            printf("Torcedores do fluminense: %d \n", flu);
            printf("Torcedores do vasco: %d \n", vas);
            printf("Torcedores do botafogo: %d \n", bot);
            printf("Torcedores de outros: %d \n", out);
            printf("Media de salario dos torcedores do botafogo: %f \n", media);
            printf("Do Rio que torcem para outros: %d \n", torcOutros);
            printf("De Niteroi que torcem para o fluminense: %d \n", torcFlu);

            
        }
    
    return 0;
}
