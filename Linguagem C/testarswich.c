#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int opcao,resultado;
    int num1,num2;
    float resul_div;
    
    printf("Menu para opera��o aritm�tica:\n");
    printf("1-somar. \n");
    printf("2-subtrair. \n");
    printf("3-multiplicar. \n");
    printf("4-dividir. \n\n");
    
    printf("informe o primeiro n�mero inteiro para a opera��o: n= ");
    scanf("%d",&num1);
    printf("informe o segundo n�mero inteiro para a opera��o: n= ");
    scanf("%d",&num2);
    printf("Escolha uma op��o: ");
    scanf("%d",&opcao);
    switch(opcao){
    case 1:
       resultado=num1+num2;
       printf("o resultado da soma = %d\n",resultado);
       break;
    case 2:
       resultado=num1-num2;
       printf("o resultado da subtra��o = %d\n",resultado);
       break;
    case 3:
       resultado=num1*num2;
       printf("o resultado da multiplica��o = %d\n",resultado);
       break;
    case 4:
       resul_div=(float)num1/num2;
       printf("o resultado da divis�o = %f\n",resul_div);
       break;
    default:
            ("voc� digitou uma op��o invalida");
}
    
    
    system("pause");
    return 0;
}
