/* Dados um n�mero inteiro, fa�a um programa em C para 
   verificar se este n�mero � par ou impar  */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){	
	setlocale(LC_ALL,"portuguese");
	int  num;
	printf("Informe um n�mero inteiro para verificar se � um n�mero par ? n = ");
	scanf("%d",&num);
	//if-else Estrutura condicional composta
	if (num % 2 == 0) {
		printf("Este n�mero n = %d � par !\n",num);
	}
	else {
		printf("Este n�mero n = %d � impar !\n",num);
	}	
	system("pause");
	return 0;
}
