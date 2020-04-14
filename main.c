#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float calculaDelta(float a, float b, float c){
    return (b * b - 4 * a * c);
}

int main()
{
    float a, b , c;
    float delta, raiz, raiz2;

    do{
        printf("Digite o valor do coeficiente A: ");
        while(!scanf("%f",&a)){
            while(getchar()!='\n'){ }
            printf("ATENCAO: digite apenas numeros.\n");
            printf("Digite o valor do coeficiente A: ");
        }

        printf("Digite o valor do coeficiente B: ");
        while(!scanf("%f",&b)){
            while(getchar()!='\n'){ }
            printf("ATENCAO: digite apenas numeros.\n");
            printf("Digite o valor do coeficiente B: ");
        }
        printf("Digite o valor do coeficiente C: ");
        while(!scanf("%f",&c)){
            while(getchar()!='\n'){ }
            printf("ATENCAO: digite apenas numeros.\n");
            printf("Digite o valor do coeficiente C: ");
        }
        delta = calculaDelta(a, b, c);
        if(delta < 0)
            printf("A funcao nao tem raiz real.\n\n");
        else{
            if(2 * a == 0)
                printf("ATENCAO: divisao por zero!\n\n");
            else{
                if(delta == 0){
                    raiz = (b * -1 + sqrt(delta)) / (2 * a);
                    printf("Raiz da funcao: %.2f\n\n", raiz);
                }
                else{
                    raiz = (b * -1 + sqrt(delta)) / (2 * a);
                    raiz2 = (b * -1 - sqrt(delta)) / (2 * a);
                    printf("Raizes da funcao: %.2f e %.2f\n\n", raiz, raiz2);
                }
            }
        }
    }while(!(a == 0 && b == 0 && c == 0)); /* condi��o de parada do programa */

    printf("Fim do programa!");
    return 0;
}
