#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL,"Portuguese");
    float salarioatual,a;
    char nome[30];
    printf("informe seu nome: ");
    gets(nome);
    printf("seu salario: ");
    scanf("%f",&salarioatual);
    a=salarioatual+salarioatual*15.35/100;
    printf("%s,seu salário é de %.2f\n",nome,a);
    system("pause");
    return 0;
}
