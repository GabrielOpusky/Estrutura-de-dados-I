#include <stdio.h>
#include <stdlib.h>
struct aluno
{
 int cpf;
 char nome[21];
 float notas[3];
};
typedef struct aluno AL;
int main()
{
 int notas[5],i;
 float media, soma ;
 AL estudante;
  for ( i = 0 ; i < 5 ; i++ )
 {
 printf("Digite o nome do aluno:\n");
 scanf(" %[^\n]s",&estudante.nome);
 scanf("%d",&estudante.cpf);
 soma = 0 ;

 printf("Digite a nota %d de %s\n", i+1, &estudante.nome);
 scanf("%f",&estudante.notas[i]);
 soma = soma + estudante.notas[i];
 
 media = soma/3;
 printf("Aluno:\n%s\nCPF: %d\nMedia:"
"%.1f\n\n" ,&estudante.nome,estudante.cpf,media);
 return 0 ;
}
}
