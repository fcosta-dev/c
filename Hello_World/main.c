#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ----------------- //
    // Primeiro programa //
    printf("Hello world\n!");
    printf("Olá do Fernando!!");
    /*return 0; colocado como comentário, senão não executa o próximo programa */

    // ----------------- //
    // Segundo programa  //
    int ano_nascimento = 1980;
    int ano_atual = 2020;

    int resultado = (ano_atual - ano_nascimento);

    printf("O Fernando tem %d anos\n",resultado);

    // ----------------- //
    // Terceiro programa //
    int hora_cinema = 20;
    int hora_atual = 20;

    if (hora_atual > hora_cinema +30) { /* Tolerancia de 30 minutos */
        printf("Passou do tempo limite! Não pode entrar\n!");
    }else if(hora_atual< hora_cinema -30){
        printf("Nem abriu a porta do cinema\n!");
    }else{
        printf("O horário está certo! Pode entrar!\n");
    }

    // ----------------- //
    // Quarto programa   //
    int contador = 1;
    int limite = 10;

    while(contador <= limite){
        printf("Estamos no primeiro loop - %d\n",contador);
        if(contador == 3)
        {
            int contador_2 = 5;
            while(contador_2 > 0) {
                printf("Estamos no segundo loop - %d\n", contador_2);
                contador_2--;
            }
        }
        contador++;
    }

    // ----------------- //
    // Quinto programa   //
    char nome[256];
    char sobrenome[256];
    int ano_nascimentoo;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s", nome);

    printf("\nShow de bola, %s... Qual sua idade?\n", nome);
    scanf("%d", &idade);

    printf("\nMuito bom! O %s tem %d anos", nome,idade);


    // ----------------- //
    // Sexto programa    //
    char nome2[256];
    int idade2;

    printf("\nOla! Qual seu nome?\n");
    scanf("%s", &nome2);

    printf("\nQual sua idade?\n");
    scanf("%d", &idade2);

    printf("Nome: %s\nIdade: %d\n", nome2, idade2);

    printf("\nAguarde enquanto lemos seus dados...\n");

    printf("\nA primeira letra do seu nome e: %c", nome2[0]);
    printf("\nA segunda letra do seu nome e: %c", nome2[1]);
    printf("\nA terceira letra do seu nome e: %c", nome2[2]);

    if (idade >= 18) {
        printf("\nVoce é adulto!");
    }else if (idade2 >= 12) {
        printf("\nVoce é Adolescente!");
    }else{
        printf("\nVoce é criança!");
    }


    return 0;


}
