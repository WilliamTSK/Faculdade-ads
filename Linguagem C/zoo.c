#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL,"portuguese");
	float custo,quantidade_Com,qcp,cd,qcm,cem;
	int quantidade_Ani;
	char nome [30];
	printf("tipo do animal ");
	gets(nome);
	printf("quantidade de animais nesse zoológico ");
	scanf("%d",&quantidade_Ani);
	printf("custo estimado por kilo de comida R$ ");
	scanf("%f",&custo);
	printf("quantidade de comida por kilo que este animal consome por dia ");
	scanf("%f",&qcp);
	
	cd=quantidade_Ani*custo*qcp;
	printf("custo estimado por dia: R$ %.2f\n",cd);
	qcm=qcp*30*quantidade_Ani;
	printf("quantidade de comida consumida por mês: %.2f\n",qcm);
	cem=qcm*custo;
	printf("custo estimado por mês: R$ %.2f\n",cem);
	
	
	system("pause");
	return 0;
	
}
