#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int function_a(int n1, int n2){
    return (n1 + n2);
}

int function_b(int n1, int n2){
    return (n1 * pow(n2, 2));
}

int function_c(int n1){
    return (pow(n1, 2));
}

float function_d(int n1, int n2){
    return (sqrt(pow(n1, 2) + pow(n2, 2)));
}

float function_e(int n1, int n2){
    return (sin(n1 - n2));
}

int function_f(int n1){
    return (fabs(n1));
}

int main(){
    int num1, num2;

    printf("Digite o primeiro numero: ");
    while(!scanf("%d",&num1)){
        while(getchar()!='\n'){ }
        printf("ATENCAO: digite apenas numeros inteiros.\n");
        printf("Digite o primeiro numero: ");
    }

    printf("Digite o segundo numero: ");
    while(!scanf("%d",&num2)){
        while(getchar()!='\n'){ }
        printf("ATENCAO: digite apenas numeros inteiros.\n");
        printf("Digite o segundo numero: ");
    }

    printf("\nFuncao A: soma dos numeros.\n");
    printf("%d\n\n", function_a(num1, num2));
    printf("Funcao B: produto do primeiro numero pelo quadrado do segundo.\n");
    printf("%d\n\n", function_b(num1, num2));
    printf("Funcao C: quadrado do primeiro numero.\n");
    printf("%d\n\n", function_c(num1));
    printf("Funcao D: raiz quadrada da soma dos quadrados.\n");
    printf("%.2f\n\n", function_d(num1, num2));
    printf("Funcao E: seno da diferenca do primeiro numero pelo segundo.\n");
    printf("%.2f\n\n", function_e(num1, num2));
    printf("Funcao F: modulo do primeiro numero.\n");
    printf("%d\n\n", function_f(num1));
    printf("Fim do programa!");
}
