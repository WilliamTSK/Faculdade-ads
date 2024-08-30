#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // uma biblioteca para usar a variável booleana

int main()
{
   bool p=false, t=true; //variáveis de booleana
   bool junto1, junto2;
   int cont, soma;
   
   printf("As variaveis p = %d, t = %d\n",p,t);
   junto1 = p&&t;
   printf("A variavel junto1 (p&&t) = %d\n",junto1);
   junto2 = p||t;
   printf("A variavel junto2 (p||t) = %d\n",junto2);
   
   
   // operadores ++, --, +=, *=, ...
   cont = 1;  soma = 2;
   cont++ ;  // cont = cont + 1;
   printf("A variavel cont = %d\n",cont);
   cont--;   //cont = cont - 1;
   printf("A variavel cont = %d\n",cont);
   cont += soma;  //cont = cont + soma
   printf("A variavel cont = %d\n",cont);
   soma += 2;  //soma = soma + 2
   printf("A variavel soma = %d\n",soma);
   cont *= soma; //cont = cont * soma
   printf("A variavel cont = %d\n",cont);  
   
   system("pause");
   return 0;
}
