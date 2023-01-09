#include<stdlib.h>
#include<stdio.h>
int main(void){
    char Nome;

    printf("Digite seu nome ");
    getchar("%c" &Nome);
    printf("Seu nome eh: %c" ,Nome);

    system("pause");

    return("0");
}