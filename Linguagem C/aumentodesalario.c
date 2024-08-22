#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main () {
    setlocale(LC_ALL,"Portuguese");
    float salarioatual,a;
    printf("seu salario: ");
    scanf("%f",&salarioatual);
    a=salarioatual+salarioatual*15.35/100;
    printf("seu salário é de %.2f\n",a);
    system("pause");
    return 0;
}
