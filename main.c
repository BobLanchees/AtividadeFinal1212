#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gabarito[51] = {'a','b','c','d','e','e','d','c','b','a','a','b','c','d','e','e','d','c','b','a','a','b','c','d','e','e','d','c','b','a','a','b','c','d','e','e','d','c','b','a','a','b','c','d','e','e','d','c','d','a'};
    gabarito[51] = '\0';

    char matriz[5][51];

    int id[5];
    id[5]= '\0';


    for(int k=0; k<5; k++){
        printf("Digite o numero da sua inscricao(5 digitos apenas): \n");
        scanf("%d", &id[k]);

    }
    for(int i=0; i<5; i++){
       printf("Digite as 50 respostas do aluno sequencialmente(a-e) \n");
        scanf("%s", matriz[i]);
    }

    int acertos[5][2];

    for(int i=0; i<5; i++){
        int aluno = i;
        int totalAcertos = 0;
        for(int j=0; j<51; j++){
            if(matriz[i][j] == gabarito[j]){
                totalAcertos++;
            }
        }
        acertos[i][0] = aluno;
        acertos[i][1] = totalAcertos;
    }
    printf("Mostrando as notas antes de classificar: \n");

    for(int i=0; i<5; i++){
        printf(" [%d]  [%d] \n", id[i], acertos[i][1]);
    }


    return 0;
}
