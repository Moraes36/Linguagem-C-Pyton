#include<stdio.h>
typedef struct
{
        float peso;
        int idade;
        float altura;
} Pessoa;
void imprimePessoa(Pessoa P)
{
    printf("Idade: %d Peso: %f\n", P.idade, P.peso,P.altura);
}
int main()
{
    Pessoa Joao, P2;
    Pessoa Povo [10];

    Joao.idade = 15;
    Joao.peso = 60.5;
    Joao.altura = 1.75;

    Povo[4].idade = 23;
    Povo[4].peso = 71.3;
    Povo[4].altura = 1.89;

    P2 = Povo[4];
    P2.idade++;

    imprimePessoa(Joao);
    imprimePessoa(Povo[4]);
    imprimePessoa(P2);

    return 0;

}
