#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
void mensagem();//declara��o de subprograma
//programa principal
int main(){
    setlocale(LC_ALL,"portuguese");
    mensagem();//chamado subprograma mensagem()
    
    system("pause");
    return 0;
}

//subprograma
void mensagem(){
     printf("Ol�,Sou um subprograma !\n");
}
