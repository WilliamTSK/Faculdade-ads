#include<stdio.h>//� uma biblioteca padr�o e sa�da
#include<stdlib.h>
//programa principal main()
int main(){
    //declara��o de vari�veis:
    int num1, num2; //vari�veis para entrada de dados
    int result_soma;//vari�vel para sa�da de dados
    
    /*O comando scanf() � para receber um dado digitado pelo  usu�rio
    %d - formata��o em inteiro; & - operador de endere�o */
    printf("informe um numero inteiro");
    scanf("%d",&num1);
    printf("informe um numero inteiro");
    scanf("%d",&num2);
    
    //realizar a operac�o da soma
    /*simbolo "=" significar receber ou atribui��o 
    s�mbolo "+" operador da soma*/
    result_soma = num1 + num2;
    
    //\n � para pular uma linha
    printf("Resultado da soma%d\n",result_soma);
    system("pause");
    return 0;
}

