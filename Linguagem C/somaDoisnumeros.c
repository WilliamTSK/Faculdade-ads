#include<stdio.h>//é uma biblioteca padrão e saída
#include<stdlib.h>
//programa principal main()
int main(){
    //declaração de variáveis:
    int num1, num2; //variáveis para entrada de dados
    int result_soma;//variável para saída de dados
    
    /*O comando scanf() é para receber um dado digitado pelo  usuário
    %d - formatação em inteiro; & - operador de endereço */
    printf("informe um numero inteiro");
    scanf("%d",&num1);
    printf("informe um numero inteiro");
    scanf("%d",&num2);
    
    //realizar a operacão da soma
    /*simbolo "=" significar receber ou atribuição 
    símbolo "+" operador da soma*/
    result_soma = num1 + num2;
    
    //\n é para pular uma linha
    printf("Resultado da soma%d\n",result_soma);
    system("pause");
    return 0;
}

