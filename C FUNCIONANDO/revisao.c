#include<stdio.h>
#include<stdlib.h>
int main(void){
    float valor1,valor2,soma;
    
    printf("Digite o primeiro valor");
    scanf("%f", &valor1);
    printf("Digite o segundo valor");
    scanf("%f", &valor2);
    
    soma = valor1+valor2;
    
    printf("a soma dos valores  \n%d ", soma);
    
if(soma > 10)
  {
    printf("O valor da soma e maior que 10\n");
  }
  else
  {
    printf("Valor menor ou igual a 10\n");
  }
  
  system("PAUSE");
  return(0);
}
