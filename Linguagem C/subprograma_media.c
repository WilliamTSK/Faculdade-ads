#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float media(float nota1,float nota2);//declara��o de subprograma
//programa principal
int main(){
    setlocale(LC_ALL,"portuguese");
    float nota1,nota2;
    printf("informe a sua primeira nota: n1= ");
    scanf("%f",&nota1);
    printf("informe a sua primeira nota: n2= ");
    scanf("%f",&nota2);
    //chamando o subprograma para executar
    printf("A media da sua prova = %.2f\n",media(nota1,nota2));
    
    
    system("pause");
    return 0;
}
//subprograma: temos par�metros nota1 e nota2:
//par�metros s�o utilizados para receber os dados
//quando um subprograma como comando "return", chamamos fun��o
//a fun��o funciona como um valor !!!!!
float media(float nota1,float nota2){
      float med;//vari�vel local
      med=(nota1+nota2)/2;
      return med;

}
