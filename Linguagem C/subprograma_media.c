#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float media(float nota1,float nota2);//declaração de subprograma
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
//subprograma: temos parâmetros nota1 e nota2:
//parâmetros são utilizados para receber os dados
//quando um subprograma como comando "return", chamamos função
//a função funciona como um valor !!!!!
float media(float nota1,float nota2){
      float med;//variável local
      med=(nota1+nota2)/2;
      return med;

}
