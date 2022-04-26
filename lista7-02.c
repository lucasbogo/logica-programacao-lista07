#include <stdio.h>

int main() {

    float n1=0, n2=0, p1=1, p2=2, mp=0;
    char resp;
    int continuar = 0;
    int respostaCorreta = 0;


    do {
        printf(" informe a nota 1..: ");
        scanf("%f", &n1);
        printf(" informe a nota 2 ..: ");
        scanf("%f", &n2);

        mp=(n1*p1 + n2*p2) / (p1+p2);
        printf("\n a media ponderada eh = %.2f ", mp);

        do {
            printf("\n digite s para continuar e n para sair...\n");
            scanf(" %c", &resp);
            switch(resp){
                case 's':  respostaCorreta = 1; continuar = 1; break;
                case 'n':  respostaCorreta = 1; continuar = 0; break;
                default:   respostaCorreta = 0; puts("ERRO: Resposta invalida!\n"); break;
            }
        } while (respostaCorreta != 1);

    } while (continuar != 0);



    return 0;
}