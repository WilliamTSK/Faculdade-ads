#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void mensagem();//declaração de subprograma
//programa principal
int main(){
    setlocale(LC_ALL,"portuguese");
    mensagem();//chamado subprograma mensagem()
    
    system("pause");
    return 0;
}

//subprograma
void mensagem(){
     printf("Olá,Sou um subprograma !\n");
}
