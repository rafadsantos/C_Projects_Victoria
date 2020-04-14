#include <stdio.h>
#include <stdlib.h>
#define TAM 2 /* quantidade de alunos pode ser alterada aqui */

int lerIdade(int num_aluno){
    int idade;

    printf("Informe a idade do aluno %d/%d: ", num_aluno, TAM);
    while(!scanf("%d",&idade) || (idade < 6 || idade > 16)){
        while(getchar()!='\n'){ }
        printf("ATENCAO: informe valores entre 6 e 16.\n");
        printf("Informe a idade do aluno %d/%d: ", num_aluno, TAM);
    }

    return idade;
}

char lerSexo(int num_aluno){
    char sexo;

    fflush(stdin);
    printf("Informe o sexo do aluno %d/%d: ", num_aluno, TAM);
    while(!scanf("%c",&sexo) || !(sexo == 'M' || sexo == 'm' || sexo == 'F' || sexo == 'f')){
        while(getchar()!='\n'){ }
        printf("ATENCAO: valores validos 'M' e 'F'.\n");
        printf("Informe o sexo do aluno %d/%d: ", num_aluno, TAM);
        fflush(stdin);
    }

    return sexo;
}

int main(){
    int idade, i, total_M, total_F, total_idade;
    char sexo;

    total_M = total_F = total_idade = 0; /* inicializa��o das vari�veis */

    for(i = 1; i <= TAM; i++){
        idade = lerIdade(i);
        sexo = lerSexo(i);
        total_idade = total_idade + idade;
        if(sexo == 'M' || sexo == 'm')
            total_M++;
        else
            total_F++;
    }

    printf("\n");
    printf("Media da idade dos alunos: %d\n", total_idade / TAM);
    printf("Total dos alunos do sexo M: %d\n", total_M);
    printf("Total dos alunos do sexo F: %d\n\n", total_F);
    printf("Fim do programa!");

    return 0;
}
