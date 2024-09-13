#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int opcao,resultado;
    int num1,num2;
    float resul_div;
    
    printf("Menu para operação aritmética:\n");
    printf("1-somar. \n");
    printf("2-subtrair. \n");
    printf("3-multiplicar. \n");
    printf("4-dividir. \n\n");
    
    printf("informe o primeiro número inteiro para a operação: n= ");
    scanf("%d",&num1);
    printf("informe o segundo número inteiro para a operação: n= ");
    scanf("%d",&num2);
    printf("Escolha uma opção: ");
    scanf("%d",&opcao);
    switch(opcao){
    case 1:
       resultado=num1+num2;
       printf("o resultado da soma = %d\n",resultado);
       break;
    case 2:
       resultado=num1-num2;
       printf("o resultado da subtração = %d\n",resultado);
       break;
    case 3:
       resultado=num1*num2;
       printf("o resultado da multiplicação = %d\n",resultado);
       break;
    case 4:
       resul_div=(float)num1/num2;
       printf("o resultado da divisão = %f\n",resul_div);
       break;
    default:
            ("você digitou uma opção invalida");
}
    
    
    system("pause");
    return 0;
}
