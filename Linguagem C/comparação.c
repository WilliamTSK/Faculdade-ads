/*dados dois n�meros inteiros, fa�a um programa em C para mostrar qual o n�mero maior!*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,"portuguese");
    int num1,num2;
    printf("informe um n�mero inteiro n1= ");
    scanf("%d",&num1);
    printf("informe um outro n�mero inteiro n2=" );
    scanf("%d",&num2);
    //estrutura condicional simples
    if(num1>num2){  
    printf("o n�mero n1 = %d � maior !\n",num1);
    }
     
    if(num1<num2){
    printf("o n�mero n2 = %d � maior !\n",num2); 
    }
    if(num1==num2){
    printf("os dois n�mero (n1=%d e n2=%d)s�o iguais!!!\n",num1,num2);
    }
    
    
    system("pause");
    return 0;
}

