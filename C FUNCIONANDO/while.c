#include<stdio.h>
int main(void){
    int contador = 1;  //Declarando e inicializando a variavel de controle

    while (contador <= 10) // Testando condição
    {
        printf("%d ", contador); //Executando um comando dentro do laço
        contador++; //Atualizando a varivel de controle.
    }
    return(0);
    
}