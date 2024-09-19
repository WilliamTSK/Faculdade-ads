#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");
    int cont = 1;
    while(cont<=20){// enquanto cont<=20 faça
        printf("valor do contador = %d",cont);            
        printf("seja bem vinda a linguagem C!\n");
        cont++;//atualiza o contator = cont = cont+1
    }
    printf("\nfim do programa!\n");


    system("pause");
    return 0;
}
