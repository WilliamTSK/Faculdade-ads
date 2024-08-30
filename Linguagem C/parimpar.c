/* Dados um número inteiro, faça um programa em C para 
   verificar se este número é par ou impar  */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){	
	setlocale(LC_ALL,"portuguese");
	int  num;
	printf("Informe um número inteiro para verificar se é um número par ? n = ");
	scanf("%d",&num);
	//if-else Estrutura condicional composta
	if (num % 2 == 0) {
		printf("Este número n = %d é par !\n",num);
	}
	else {
		printf("Este número n = %d é impar !\n",num);
	}	
	system("pause");
	return 0;
}
