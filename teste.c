#include<stdio.h>
#include<stdlib.h>

int main(void){
    
        int a, b, soma;
        int x = + a++;
        int soma=x;

        printf("O VALOR DE X EH:");
        scanf("%d", &x);
        printf("AQUI ESTA O VALOR BURRO", x);
        printf("Digite um numero inteiro: ");
        scanf("%d", &a); //Recebe um numero inteiro e armazena na variavel a.

        printf("Digite um numero inteiro: ");
        scanf("%d", &b); // Recebe um numero inteiro e armazena na variavel b.
        soma = a + b;
        //Efetua á edição dos dois numeros armzenando o resultado na variavel soma.

        printf("O valor da soma = %d\n", soma); //Exibe o resultado na tela.

        system("pause");
        return(0);
}
