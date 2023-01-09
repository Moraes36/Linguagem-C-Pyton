#include<stdio.h>
#include<stdlib.h>
int main(){
    char string[50];
    float salario,inss,fgts,resultado;
    inss = 0.06;
    fgts = 0.10;

    printf("Seja bem Vindo \n, Digite seu nome \n");
    gets(string);
    printf(" %s Digite seu salario \n",string);
    scanf("%f", &salario);

    resultado = (salario*inss*fgts);
    printf("%s Seu salario eh %2.f e seu desconto de inss é %2.f \n",string,salario,resultado);

system("Pause");
    return(0);
}