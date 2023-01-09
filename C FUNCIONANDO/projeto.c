#include<stdio.h>
#include<stdlib.h>
int main(){
    char string[50];
    int valor1,valor2,soma;

    printf("Digite o seu nome \n");
    gets (string);
    printf("legal %s digite agora o primeiro valor para soma\n",string);
    scanf("%d", &valor1);
    printf("ok, %s o numero que voce digitou foi %d agora o sgundo numer \n",string,valor1);
    scanf("%d", &valor2);

    soma = valor1+valor2;

    printf("%s Certo a soma dos valores eh %d",string,soma);
    return(0);
}