#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    setlocale(LC_ALL,"portuguese");
    float salarioatual,sal_aumento,salario_liquido;
    float aumento,imposto;
    printf ("qual o seu sal�rio? ");
    scanf("%f",&salarioatual);
    if(salarioatual<=3000.0){
          aumento =(15.45/100)*salarioatual;
          sal_aumento=salarioatual + aumento;
    }
    else if (salarioatual <=5500){
         aumento =(10.15/100)*salarioatual;
         sal_aumento=salarioatual + aumento;
         }
         else {
              aumento =(7.5/100)*salarioatual;
              sal_aumento=salarioatual + aumento;  
    }
    printf("sal�rio bruto com aumento R$%.2f = R$%.2f\n",aumento,sal_aumento);
    imposto=(20.5/100)*sal_aumento;
    salario_liquido=sal_aumento-imposto;
    printf("sal�rio liquido com imposto pago R$%.2f = R$%.2f\n",imposto,salario_liquido);
    
                        




    system("pause");
    return 0;
}
