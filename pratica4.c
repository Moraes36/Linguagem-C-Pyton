#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor1,valor2,soma;
    
    printf("Digite o primeiro valor");
    scanf("%d", &valor1);
    printf("Digite o segundo valor");
    scanf("%d", &valor2);
    
    soma = valor1+valor2;
    
    printf("a soma dos valores é %d", soma);
}