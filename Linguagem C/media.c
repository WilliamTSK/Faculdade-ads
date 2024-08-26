#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale (LC_ALL,"Portuguese");
    float exer,npf,np,nf;
    char nome[30];
    printf("informe seu nome: ");
    gets(nome);
    printf("nota do portifolio ");
    scanf("%f",&npf);
    npf=(npf*3)/10;
    printf("nota da prova ");
    scanf("%f",&np);
    np=(np*5)/10;
    printf("nota dos esxercicios ");
    scanf("%f",&exer);
    exer=(exer*2)/10;
    nf=(npf+np+exer);
    printf("%s sua nota é %.2f\n",nome,nf);
    
    system("pause");
	return 0;
}
    
