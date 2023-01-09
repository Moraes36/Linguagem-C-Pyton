#include<stdio.h>
int main(){
    char string[100];
    printf("Digite uma string ");
    gets (string); //Veja alerta e alternativa ao uso da função gets
    printf("Você digitou %s\n",string);
    return(0);
}